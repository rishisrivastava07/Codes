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
    int i,j,k = 0;
    for(i = 0; i < S.no_of_rows; i++){
        for(j = 0; j < S.no_of_cols; j++){
            if( i == S.ele[k].rowth && j == S.ele[k].colth){
                printf(" %d ",S.ele[k++].val);
            }
            else{
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}
void create(Sparse* S1){
    int i,j;
    printf("Enter the no of rows and no of cols of Matrics (rows and columns must be same): \n");
    scanf("%d %d",&S1->no_of_rows,&S1->no_of_cols);
    printf("Enter the no of Non-Zeros in Matrix A : ");
    scanf("%d",&S1->no_of_nonzeros);

    for(i = 0; i < S1->no_of_nonzeros; i++){
        printf("Enter the Element (row - col - val) %d : ",i+1);
        scanf("%d %d %d",&S1->ele[i].rowth,&S1->ele[i].colth,&S1->ele[i].val);
    }
}

int count(Sparse S){
    int cnt = 0;
    int i,j,k = 0;
    for(i = 0; i < S.no_of_rows; i++){
        for(j = 0; j < S.no_of_cols; j++){
            if( i == S.ele[k].rowth && j == S.ele[k].colth && S.ele[k].val != 0){
                cnt++;
                k++;
            }
        }
    }
    return cnt;
}
int main(){
    Sparse S1;
    create(&S1);
    display(S1);
    printf("No of Non-Zeros Element are : %d",count(S1));
    return 0;
}