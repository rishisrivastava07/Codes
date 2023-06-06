#include<stdio.h>
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("Inside Function\n");
    printf("value of a = %d\n",(*a));
    printf("value of b = %d\n",(*b));
}
int main(){
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);

    swap(&a,&b);
    
    printf("Outside Function\n");
    printf("value of a = %d\n",a);
    printf("value of b = %d\n",b);
}