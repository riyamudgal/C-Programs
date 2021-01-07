#include<stdio.h>
#include<conio.h>
void main(int argc, char const *argv[])
{
    int num[100];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf(" Enter number %d index ", i);
        scanf("%d", &num[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum=sum+num[i];
    }
    printf("Sum of above entered numbers is %d", sum);
    
    }
        