#include<stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int A[],int n){
    int i,j;
    int flag;
    for(i = 0; i < n-1; i++){
        flag = 0;
        for(j = 0; j < n-1-i; j++){
            if(A[j] > A[j+1]){
                swap(&A[j],&A[j+1]);
                flag = 1;
            }
        }
        // printing each time the changing
        int k;
        printf("Pass %d \n",i+1);
        for (k = 0; k < 5; k++){
            printf("%d ",A[k]);
        }
        printf("\n");
        if(flag == 0){
            return ;
        }
    }
}
void insertionSort(int A[], int n){
    int i;
    for(i = 1; i < n; i++){
        int x = A[i];
        int j = i - 1;
        while(j > -1 && A[j] > x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
        // printing each time the changing
        int k;
        printf("Pass %d \n",i);
        for (k = 0; k < 5; k++){
            printf("%d ",A[k]);
        }
        printf("\n");
    }
}
int main(){
    int A[5] = {81,92,5,0,-12};
    bubbleSort(A,5);
    // insertionSort(A,5);

    return 0;
}