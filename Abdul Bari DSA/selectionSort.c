#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void printArray(int arr[],int size){
    int i;
    printf("Array = \n");
    printf("[");
    for(i = 0; i < size; i++){
        printf("%d,",arr[i]);
    }
    printf("]\n");
}
void selectionSort(int arr[],int size){
    int i,j;
    for(i = 0; i < size - 1; i++){
        for(j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
        printArray(arr,size);
    }
}
void bubbleSort(int arr[], int size){
    int i,j;
    for(i = 0; i < size-1; i++){
        for(j = 0; j < size-1-i; j++){
            if(arr[j+1] < arr[j]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        printArray(arr,size);
    }
}
void insertionSort(int arr[], int size){
    int i,j,current;
    for(i = 1; i < size; i++){
        current = arr[i];
        j = i-1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        printArray(arr,size);
    }
}
int main(){
    // int n,*arr,i;
    // scanf("%d",&n);

    // arr = (int*)malloc(n*sizeof(int));
    // for(i = 0; i < n; i++){
    //     scanf("%d",&arr[i]);
    // }
    int arr[5] = {10,8,4,6,2};
    printArray(arr,5);
    // selectionSort(arr,5);
    // bubbleSort(arr,5);
    insertionSort(arr,5);
}