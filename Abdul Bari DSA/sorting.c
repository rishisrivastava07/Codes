#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
void print(int arr[], int size){
    int i;
    printf("[ ");
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
}
int main(){
    int ch,i,sz;
    printf("Enter the size of array : ");
    scanf("%d",&sz);
    int *arr = (int*)malloc(sz * sizeof(int));
    printf("Enter the elements of an array : ");
    for(i = 0; i < sz; i++){
        scanf("%d",&arr[i]);
    }
    while(1){
        printf("--Sorting Algorithms--\n");
        printf("1. Insertion Sort\n2. Bubble Sort\n3. Selection Sort\n4. Merge Sort\n5. Quick Sort\n6. Heap Sort\n7. Print Array\n8. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);
        
        switch(ch){
            case 1 : 
                    // insertionSort(arr,sz);
                    break;
            case 2 : 
                    // bubbleSort(arr,sz);
                    break;
            case 3 : 
                    // selectionSort(arr,sz);
                    break;
            case 4 : 
                    // mergeSort(arr,sz);
                    break;
            case 5 : 
                    // quickSort(arr,sz);
                    break;
            case 6 : 
                    // heapSort(arr,sz);
                    break;
            case 7 : 
                    print(arr,sz);
                    break;
            case 8 : exit(0);
                    break;
            default : printf("Entered a wrong choice!!\n");
                    break;
        }
    }
    return 0;
}