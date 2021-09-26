//Autor: Suárez Pérez Juan Pablo
//Fecha: 27/07/2021

#include <stdio.h>

void bubbleSort(int *array, int sizeArray);
void insertionSort(int *array, int sizeArray);
void selectionSort(int *array, int sizeArray);
void mergeSort(int *array, int sizeArray);
void merge(int *array, int *firstArray, int *secondArray, int firstSize, int secondSize);
void quickSort(int *array, int p, int r);
int partition(int *array, int p, int r);