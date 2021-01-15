#include<stdio.h>
#include<conio.h>
int main()
{
    int b=6;
    int *a=&b;

    printf("\n Value of a = %d", b);
    printf("\n Adress of a = %d", &b);
    printf("\n Value of pointer a =%d", *a);
    printf("\n Address of a by pointer = %d ", a);
    printf("\n Addressbnof pointer =%d ", &a);

    return 0;
    }