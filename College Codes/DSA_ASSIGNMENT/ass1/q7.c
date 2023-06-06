#include<stdio.h>
#include<stdlib.h>
typedef struct Element{
    int rowth,colth,val;
}Element;

typedef struct Sparse{
    int no_of_rows;
    int no_of_cols;
    int no_of_nonzeros;
    Element ele[100];
}Sparse;

void display(Sparse S){
    int i;
    printf("Sparse Matrix : \n");
    for(i = 0; i < S.no_of_nonzeros; i++){
        printf("(Row %d, Col %d) & Value is : %d \n",S.ele[i].rowth,S.ele[i].colth,S.ele[i].val);
    }
}
void create(Sparse* S1, Sparse* S2){
    int i,j;
    printf("Enter the no of rows and no of cols of Matrics (rows and columns must be same): \n");
    scanf("%d %d",&S1->no_of_rows,&S1->no_of_cols);
    S2->no_of_rows = S1->no_of_rows;
    S2->no_of_cols = S1->no_of_cols;
    printf("Enter the no of Non-Zeros in Matrix A : ");
    scanf("%d",&S1->no_of_nonzeros);

    for(i = 0; i < S1->no_of_nonzeros; i++){
        printf("Enter the Element (row - col - val) %d : ",i+1);
        scanf("%d %d %d",&S1->ele[i].rowth,&S1->ele[i].colth,&S1->ele[i].val);
    }
    printf("Enter the no of Non-Zeros in Matrix B : ");
    scanf("%d",&S2->no_of_nonzeros);

    for(i = 0; i < S2->no_of_nonzeros; i++){
        printf("Enter the Element (row - col - val) %d : ",i+1);
        scanf("%d %d %d",&S2->ele[i].rowth,&S2->ele[i].colth,&S2->ele[i].val);
    }
}

void addMatrix(Sparse* S1, Sparse* S2){
    Sparse Sum;
    int i,j,k,l,flag;
    
    for(i = 0, l = 0, k = 0; (i < S1->no_of_nonzeros); k++){
        flag = 0;
        for(j = 0; (j < S2->no_of_nonzeros); j++){
            if((S1->ele[i].rowth == S2->ele[j].rowth) &&(S1->ele[i].colth == S2->ele[j].colth)){
                Sum.ele[k].rowth = S1->ele[i].rowth;
                Sum.ele[k].colth = S1->ele[i].colth;
                Sum.ele[k].val = ((S1->ele[i].val) + (S2->ele[j].val));
                l++;
                i++;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            Sum.ele[k] = S1->ele[i];
            i++;
        }
    }
    while(l<S2->no_of_nonzeros){
        Sum.ele[k] = S2->ele[l];
        l++;
        k++;
    }

    Sum.no_of_nonzeros = k;
    Sum.no_of_rows = S1->no_of_rows;
    Sum.no_of_cols = S1->no_of_cols;
    display(Sum);
}

int main(){
    Sparse S1,S2,Res;
    create(&S1,&S2);
    addMatrix(&S1,&S2);
    return 0;
}