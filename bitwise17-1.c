#include<stdio.h>
#include<conio.h>

void main()
{
    int x=15,y=45;
    printf("Perform Bitwise pre increment ");
    x=++y;
    printf("\n X = %d , Y = %d",x,y);

    printf("\n Perform Bitwise post increment \n ");
    x=y++;
    printf(" \n X = %d , Y = %d",x,y);

    printf("\n Perform Bitwise pre decrement \n");
    x=--y;
    printf("\n X = %d , Y = %d",x,y);

    printf("\n Perform Bitwise post decrement \n");
    x=y--;
    printf("X = %d , Y = %d",x,y);

}