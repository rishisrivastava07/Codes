#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int coeff;
    int power;
} val;

typedef struct
{
    int n;
    val *mat;
} add;

int main()
{
    add a;
    int n, i, j, k;
    printf("Enter the nos of integer for Num 1 want to store : \n");
    scanf("%d", &a.n);
    int t = a.n;
    a.mat = malloc((a.n) * sizeof *a.mat);
    printf("Enter the cofficient and power of a number : \n");
    for (i = 0; i < a.n; i++)
    {
        scanf("%d %d", &a.mat[i].coeff, &a.mat[i].power);
    }
    add b;
    printf("Enter the nos of integer for Num 2 want to store : \n");
    scanf("%d", &b.n);
    b.mat = malloc((b.n) * sizeof *b.mat);
    printf("Enter the cofficient and power of a number : \n");
    for (i = 0; i < b.n; i++)
    {
        scanf("%d %d", &b.mat[i].coeff, &b.mat[i].power);
    }
    for (i = 0; i < a.n; i++)
    {
        for (j = 0; j < b.n; j++)
        {
            if (a.mat[i].power == b.mat[j].power)
            {
                a.mat[i].coeff = a.mat[i].coeff + b.mat[i].coeff;
                b.mat[i].coeff = 0;
            }
        }
    }
    k = 0;
    for (i = 0; i < b.n; i++)
    {
        if (b.mat[i].coeff != 0)
        {
            k++;
        }
    }
    add ans;
    ans.n = t + k;
    ans.mat = malloc((ans.n) * sizeof *ans.mat);
    int p = 0;

    for (i = 0; i < a.n; i++)
    {
        ans.mat[p].coeff = a.mat[i].coeff;
        ans.mat[p].power = a.mat[i].power;
        p++;
    }
    for (i = 0; i < b.n; i++)
    {
        if (b.mat[i].coeff != 0)
        {
            k++;
        }
    }
    ans.n = t + k;
    ans.mat = malloc((ans.n) * sizeof *ans.mat);
    p = 0;

    for (i = 0; i < a.n; i++)
    {
        ans.mat[p].coeff = a.mat[i].coeff;
        ans.mat[p].power = a.mat[i].power;
        p++;
    }
    for (i = 0; i < b.n; i++)
    {
        if (b.mat[i].coeff != 0)
        {
            ans.mat[p].coeff = b.mat[i].coeff;
            ans.mat[p].power = b.mat[i].power;
            p++;
        }
    }
    printf("After Addition (Coefficient - Power) are : \n");
    for (i = 0; i < ans.n; i++)
    {
        printf("%d  %d\n", ans.mat[i].coeff, ans.mat[i].power);
    }
    return 0;
}