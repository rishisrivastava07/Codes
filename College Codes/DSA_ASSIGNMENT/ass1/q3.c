#include<stdio.h>

typedef struct term{
    float coeff;
    int expo;
}term;

typedef struct poly{
    term a[1000];
    int no_of_terms;
}poly;

// Function for Adding two Polynomial

poly addPoly(poly *P1,poly *P2){
    poly P3;
    int i,j,k,l;
    for(i=0,j=0,k=0; (i < P1->no_of_terms) && (j < P2->no_of_terms); k++){
        if(P1->a[i].expo == P2->a[j].expo){
            P3.a[k].coeff = P1->a[i].coeff + P2->a[j].coeff;
            P3.a[k].expo = P1->a[i].expo;
            i++;
            j++;
        }
        else if(P1->a[i].expo < P2->a[j].expo){
            P3.a[k] = P1->a[i];
            i++;
        }
        else{
            P3.a[k] = P2->a[j];
            j++;
        }
    }
    if(i < P1->no_of_terms){
        for(l=i; l<P1->no_of_terms;l++,k++){
            P3.a[k] = P1->a[l];
        }
    }
    else{
        for(l=j; l<P2->no_of_terms;l++,k++){
            P3.a[k] = P2->a[l];
        }
    }
    P3.no_of_terms=k;
    return P3;
}

// Function For Printing polynomial
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
    poly P1,P2,P3;
    int i;

    // input of the 2 polynomials
    printf("Enter the polynomial in increasing degree (0-n):\n");
    printf("Enter the number of terms input in Polynomial 1 : ");
    scanf("%d",&P1.no_of_terms);
    for(i = 0; i < P1.no_of_terms; i++){

        printf("Enter the %dth term exponent of polynomial 1 : ",i+1);
        scanf("%d",&P1.a[i].expo);
        printf("Enter the %dth term coefficient of polynomial 1 : ",i+1);
        scanf("%f",&P1.a[i].coeff);

    }
    printPoly(&P1);
    printf("\n");
    printf("Enter the number of terms input in Polynomial 2 : ");
    scanf("%d",&P2.no_of_terms);
    for(i = 0; i < P2.no_of_terms; i++){

        printf("Enter the %dth term exponent of polynomial 2 : ",i+1);
        scanf("%d",&P2.a[i].expo);
        printf("Enter the %dth term coefficient of polynomial 2 : ",i+1);
        scanf("%f",&P2.a[i].coeff);

    }
    printf("\n");
    printPoly(&P2);
    // adding of polynomial
    
    P3 = addPoly(&P1,&P2);

    // printing of polynomial
    printPoly(&P3);
    
    return 0;
}