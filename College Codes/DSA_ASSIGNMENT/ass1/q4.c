#include <stdio.h>
#include <math.h>

typedef struct term{
    float coeff;
    int expo;
} term;

typedef struct poly{
    term a[1000];
    int no_of_terms;
} poly;

float evaluate(poly *P,int x){
    float sum = 0;
    int i;
    for(i = 0; i < P->no_of_terms; i++){
        sum += (pow(x, P->a[i].expo) * P->a[i].coeff);
    }
    return sum;
}
// Printing of Polynomial
void printPoly(poly *P){
    int i;
    printf("Polynomial is : ");
    for(i=0; i < P->no_of_terms;i++){
        if(i==((P->no_of_terms)-1)){
            printf("%0.1f x ^ %d",P->a[i].coeff,P->a[i].expo);
            break;
        }
        printf("%0.1f x ^ %d + ",P->a[i].coeff,P->a[i].expo);
    }
    printf("\n");
}

int main(){
    poly P;
    int i,x;
    float ans;
    printf("Enter the no of terms : ");
    scanf("%d",&P.no_of_terms);

    for (i = 0; i < P.no_of_terms; i++){
        printf("Enter the %dth term exponent : ",i+1);
        scanf("%d",&P.a[i].expo);
        printf("Enter the %dth term coefficient : ",i+1);
        scanf("%f",&P.a[i].coeff);
    }

    // printing of polynomial
    printPoly(&P);
    
    printf("Enter the value of x : ");
    scanf("%d",&x);

    ans = evaluate(&P,x);
    printf("Answer is : %0.2f ",ans);
    return 0;
}