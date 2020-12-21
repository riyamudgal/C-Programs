#include<stdio.h>
#include<conio.h>
void main(int argc, char const *argv[])
{
    int n;
    printf("Enter any number");
    scanf("%d", &n);
    int digits,sum=0;

    while(n>0)
    {
        digits=n%10;
        sum=sum+digits;
        n=n/10;
    }
    printf("%d\n ", sum);
    }