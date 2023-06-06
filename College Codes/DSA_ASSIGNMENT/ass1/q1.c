#include<stdio.h>
void del(int arr[], int size, int index){
    for (int i = index; i < size; i++){
        arr[i] = arr[i+1];
    }
}
int main(){
    int arr[10];
    printf("Enter 10 elements in an array = \n");
    for (int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    del(arr,10,3);
    del(arr,10,6);
    
    printf("5th Index = %d ",arr[5]); 
    return 0;
}
