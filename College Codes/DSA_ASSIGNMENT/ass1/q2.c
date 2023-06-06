#include<stdio.h>
int rev(int arr[], int size){
    int i = 0;
    while(i <= (size)/2){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
        i++;
    }
}
void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d \t",arr[i]);
    } 
}

int main(){
    int arr[] = {3,7,5,1,9,15,8};
    printf("\n");
    printArr(arr,7);
    rev(arr,7);
    printf("\n");
    printArr(arr,7);
    return 0;
}