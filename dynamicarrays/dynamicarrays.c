#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* array;
    int size;
    int capacity;
} DynamicArray;

void initialize(DynamicArray* arr){
    arr->array = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

void append(DynamicArray* arr, int element){
    if (arr->size >= arr->capacity) {
        int newCapacity = (arr->capacity == 0) ? 1 : arr->capacity * 2;
        int* newArray = realloc(arr->array, newCapacity * sizeof(int));

        if (newArray == NULL){
            printf("memory allocation failed\n");
            return;
        }

        arr->array = newArray;
        arr->capacity = newCapacity;
    }
    arr->array[arr->size++] = element;

}

void freeArray(DynamicArray* arr){
    free(arr->array);
    arr->array = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

int main(void){
    DynamicArray myArray;
    initialize(&myArray);

    append(&myArray, 10);
    append(&myArray, 20);
    append(&myArray, 30);
    
    for (int i = 0; i < myArray.size; i++){
        printf("%d ", myArray.array[i]);
    }
    printf("\n");

    freeArray(&myArray);

}
