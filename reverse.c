#include<stdio.h>
#include<conio.h>
void main(int argc, char const *argv[])
{
    int n;
    int m,sum=0;
    printf("Enter any number");
    scanf("%d", &n);
    while(n>0)
{
    m=n%10;
    printf("%d", m);
    n=n/10;
}
}