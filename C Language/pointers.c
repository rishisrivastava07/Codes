// pointers is a special data type which store address of another variables

#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a; // appropriate
    // int * ptr;   // not desirable condition
    // ptr = &a;
    // int *ptr = 0; // NULL POINTER

    // ptr = &a;
    // printf("Value of a is %d \n",a);
    // printf("Value of ptr is %x \n",ptr);
    // printf("Value of *ptr is %d \n",*ptr);

    int **ptra = &ptr;

    printf("Value of &a is %x \n",&a);        // address(a)
    printf("Value of ptr is %x \n",ptr);        // address(a)
    printf("Value of *ptr is %d \n",*ptr);      // value of address(value(a))
    printf("Value of &ptr is %x \n",&ptr);      // address of 1st ptr
    printf("Value of ptra is %x \n",ptra);      // address of 1st ptr
    printf("Value of *ptra is %x \n",*ptra);      // address of 1st ptr
    printf("Value of **ptra is %d \n",**ptra);  // value of address(ptr(adress(value(a))))


    // ptr --> referencing the data type
    // *ptr --> dereference

}