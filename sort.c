//Autor: Suárez Pérez Juan Pablo
//Fecha: 11/08/2021

#include "sort.h"

void bubbleSort(int *array, int sizeArray) {
    int aux = 0;
    for(int i = 0; i < sizeArray; i++) {
        for(int j = 0; j < sizeArray - 1; j++) {
            if(array[j] > array[j + 1]) {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1]  = aux;
            }
        }
    }
}

void insertionSort(int *array, int sizeArray) {
    int i = 0;
    int j = 0; 
    int aux = 0;
    for(i = 0; i < sizeArray; i++) {
        j = i;
        aux = array[i];
        while(j > 0 && aux < array[j - 1]) {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = aux;
    }
}

void selectionSort(int *array, int sizeArray) {
    int i = 0;
    int j = 0; 
    int min = 0; 
    int aux = 0;
    for(i = 0; i < sizeArray; i++) {
        min = i;
        for(j = i + 1; j < sizeArray; j++) {
            if(array[j] < array[min]) {
                min = j;
            }
        }
        aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }
}

void mergeSort(int *array, int sizeArray) {
    if(sizeArray < 2) {
        return;
    }
    else {
        int firstSize = sizeArray / 2;
        int secondSize = sizeArray - firstSize;
        int firstArray[firstSize];
        int secondArray[secondSize];
        for(int i = 0; i < firstSize; i++) { 
            firstArray[i] = array[i];
        }
        for(int i = firstSize, j = 0; i < sizeArray; i++, j++) {
            secondArray[j] = array[i];
        }
        mergeSort(firstArray, firstSize);
        mergeSort(secondArray, secondSize);
        merge(array, firstArray, secondArray, firstSize, secondSize);
    }
}

void merge(int *array, int *firstArray, int *secondArray, int firstSize, int secondSize) {
    int first = 0;
    int second = 0;
    int final = 0;
    while(first < firstSize && second < secondSize) {
        if(firstArray[first] < secondArray[second]) {
            array[final] = firstArray[first];
            first++;
        } else {
            array[final] = secondArray[second];
            second++;
        }
        final++;
    }
    while(first < firstSize) {
        array[final] = firstArray[first];
        first++;
        final++;
    }
    while(second < secondSize) {
        array[final] = secondArray[second];
        second++;
        final++;
    }
}