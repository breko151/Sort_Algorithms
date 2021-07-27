//Autor: Suárez Pérez Juan Pablo
//Fecha: 27/07/2021

#include "random_generation.h"

int *random_gen(int size_array, int randomRange) {
    srand(time(NULL));
    int *newArray = NULL;
    int k = 0, aleatorio = 0;
    if(size_array <= 0) {
        printf("\nHubo un error...");
        printf("\nSaldrá del programa...");
        exit(1);
    }
    newArray = (int *) malloc(sizeof(int) * size_array);
    if(newArray == NULL) {
        printf("\nHubo un error...");
        printf("\nSaldrá del programa...");
        exit(1);
    }
    for(k = 0; k < size_array; k++) {
        aleatorio = rand() % (randomRange + 1);
        newArray[k] = aleatorio;
    }
    return newArray;
}