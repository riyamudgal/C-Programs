#include<stdio.h>
#include<conio.h>

void main(int argc, int const *argv[])
{
    int a,b,sum=0,dif=0,mul=0,div=0;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum of %d and %d is %d \n", a, b, sum);
    dif=a-b;
    printf("Difference of %d and %d is %d \n", a, b, dif);
mul=a*b;
    printf("Product of %d and %d is %d \n", a, b, mul);
div=a/b;
    printf("Division of %d and %d is %d \n", a, b, div);
}