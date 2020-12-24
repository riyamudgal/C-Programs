#include<stdio.h>
#include<conio.h>
int add(int,int);
int difference(int, int);
int product(int, int);
int division(int ,int);

void main()
{
    int a,b,sum,diff,pro,div;
    printf("Enter any two numbers");
    scanf("%d %d", &a, &b);
    
    sum=add(a,b);
    printf("\n Sum of %d and %d numbers is %d", a,b,sum );
    diff=difference(a,b);
    printf("\n Difference of %d and %d numbers is %d", a,b,diff );
    pro=product(a,b);
    printf("\n Product of %d and %d numbers is %d", a,b,pro );
    div=division(a,b);
    printf("\n Division of %d and %d numbers is %d", a,b,div);
}

int add(int a,int b)
{
    return (a+b);
}
int difference(int a,int b)
{
    return (a-b);
}
int product(int a,int b)
{
    return (a*b);
}
int division(int a,int b)
{
    return (a/b);
}