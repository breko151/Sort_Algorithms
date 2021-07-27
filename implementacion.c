//Autor: Suárez Pérez Juan Pablo
//Fecha: 27/07/2021

#include "random_generation.h"

void makeRandom(int **newArray, int sizeArray);
void procedimiento();

int main(int argc, char **argv) {
    procedimiento();
    return 0;
}

void procedimiento() {
    printf("Bienvenido...");
    int *randomArray = NULL;
    int sizeArray = 0;
    printf("\nTamano del vector: ");
    scanf("%d", &sizeArray);
    makeRandom(&randomArray, sizeArray);
    printf("\n");
    for(int i = 0; i < sizeArray; i++) {
        printf("[%d] = %d\n", i, randomArray[i]);
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