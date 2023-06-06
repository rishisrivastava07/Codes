#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
    int coef;
    int exp;
} term;

typedef struct
{
    int n;
    term *t;
} Poly;

void create(Poly *p)
{
    int i;
    printf("Enter no of terms : ");
    scanf("%d", &p->n);
    p->t = (term *)malloc(p->n * sizeof(term));
    printf("Enter coefficient and exponent of respective term\n");
    for (i = 0; i < p->n; i++){
        scanf("%d %d", &p->t[i].coef, &p->t[i].exp);
    }
}

void display(Poly p){
    int i;
    printf("Polynomial is : ");
    for (i = 0; i < p.n; i++){
        printf("%d x ^ %d", p.t[i].coef, p.t[i].exp);
        if (i < p.n - 1){
            printf(" + ");
        }
    }
}
Poly *add(Poly *p1, Poly *p2)
{
    int i, j, k;
    Poly *sum;
    sum = (Poly *)malloc(sizeof(Poly));
    sum->t = (term *)malloc((p1->n + p2->n) * sizeof(term));
    i = j = k = 0;
    while (i < p1->n && j < p2->n)
    {
        if (p1->t[i].exp > p2->t[j].exp){
            sum->t[k++] = p1->t[i++];
        }
        else if (p1->t[i].exp < p2->t[j].exp){
            sum->t[k++] = p2->t[j++];
        }
        else{
            sum->t[k].exp = p1->t[i].exp;
            sum->t[k++].coef = p1->t[i++].coef + p2->t[j++].coef;
        }
    }
    for (; i < p1->n; i++){
        sum->t[k++] = p1->t[i];
    }
    for (; j < p2->n; j++){
        sum->t[k++] = p2->t[j];
    }
    sum->n = k;
    return sum;
}

Poly *mulPoly(Poly *p1, Poly *p2){
    int i, j, k;
    Poly *p3 = (Poly *)malloc(sizeof(Poly));
    p3->t = (term *)malloc((p1->n * p2->n) * sizeof(term));
    Poly *p4 = (Poly *)malloc(sizeof(Poly));
    p4->t = (term *)malloc((p1->n * p2->n) * sizeof(term));
    Poly *p5 = (Poly *)malloc(sizeof(Poly));
    p5->t = (term *)malloc((p1->n * p2->n) * sizeof(term));
    p3->n = 0;
    p4->n = 0;
    p5->n = 0;

    for (i = 0; i < p1->n; i++){
        for (j = 0, k = 0; j < p2->n; j++, k++){
            p3->t[k].coef = p1->t[i].coef * p2->t[j].coef;
            p3->t[k].exp = p1->t[i].exp + p2->t[j].exp;
        }
        p3->n = k;
        p5 = add(p3, p4);
        p4 = p5;
    }
    return p4;
}
int main(){
    Poly p1, p2, *p3;
    create(&p1);
    create(&p2);
    p3 = mulPoly(&p1, &p2);
    printf("\n");
    display(p1);
    printf("\n");
    display(p2);
    printf("\n");
    display(*p3);
    return 0;
}