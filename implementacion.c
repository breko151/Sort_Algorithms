//Autor: Suárez Pérez Juan Pablo
//Fecha: 27/07/2021

#include "random_generation.h"
#include "sort.h"

void makeRandom(int **newArray, int sizeArray);
void procedure();
void printArray(int *newArray, int sizeArray);

int main(int argc, char **argv) {
    procedure();
    return 0;
}

void procedure() {
    printf("Bienvenido...");
    int *randomArray = NULL;
    int sizeArray = 0;
    int opc = 0;
    char resp = 's';
    while(resp == 's' || resp == 'S') {
        printf("\nTamano del vector: ");
        scanf("%d", &sizeArray);
        makeRandom(&randomArray, sizeArray);
        printf("\n");
        printArray(randomArray, sizeArray);
        fflush(stdin);
        fflush(stdout);
        printf("Algoritmos de Ordenamiento:");
        printf("\n1. Ordenamiento Burbuja");
        printf("\n2. Ordenamiento por Seleccion");
        printf("\n3. Ordenamiento por Insercion");
        printf("\nEscoga un numero: ");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                bubbleSort(randomArray, sizeArray);
                break;
            case 2:
                selectionSort(randomArray, sizeArray);
                break;
            case 3:
                insertionSort(randomArray, sizeArray);
                break;
            default:
                printf("\nOpcion Incorrecta, escriba bien...");
                break;
        }
        printArray(randomArray, sizeArray);
        fflush(stdin);
        fflush(stdout);
        printf("\nDesea probar otro ordenamiento? [s/n]: ");
        scanf("%c", &resp);
    }
}

void makeRandom(int **newArray, int sizeArray) {
    int *myArray = NULL;
    int randomRange = 0;
    printf("Rango del Random: ");
    scanf("%d", &randomRange);
    myArray = (int *) malloc(sizeof(int) * sizeArray);
    if(newArray == NULL) {
        printf("Hubo un error...");
        printf("\nSaldrá del programa...");
        exit(1);
    }
    myArray = random_gen(sizeArray, randomRange);
    *newArray = myArray;
    printf("Random generado...");
}

void printArray(int *newArray, int sizeArray) {
    printf("\n");
    for(int i = 0; i < sizeArray; i++) {
        printf("array[%d] = %d\n", i, newArray[i]);
    }
}