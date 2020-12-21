#include<stdio.h>
#include<conio.h>
void main(int argc, char const *argv[])
{
    int num;
    int sum=0;
    for(int i=1;i<10;i++)
    {
        printf(" Enter number %d ", i);
scanf("%d", &num);
sum=sum+num;
    }
    printf("Sum of above entered 10 numbers is %d", sum);
    
    }
        