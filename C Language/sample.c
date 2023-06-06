#include<stdio.h>

// function signature
// int fact(int); // forward declaration

// function body
int fact(int n){ // n--> formal parameter
    if(n==0 || n== 1){
        return 1;
    }
    // int nm1 = fact(n-1);
    int N = fact(n-1) * n;
    
    return N;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("factorial is :%d",fact(n)); 
    // fact(n) --> function call
    // fact(n) --> n--> is actual parameter
    return 0;
}
