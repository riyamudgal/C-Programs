#include<stdio.h>
#include<conio.h>

int add(int,int);
int difference(int,int);
int product(int,int);
int division(int,int);
void main()
{
    int ans,a,b,sum,diff,pro,div;
    printf("Enter any two numbers");
    scanf("%d %d", &a, &b);

    printf("Enter '1' for Addition");
    printf("Enter '2' for Subtraction");
    printf("Enter '3' for Multiplication");
    printf("Enter '4' for Division");
    scanf("%d",&ans);

    switch(ans)
    {
        case 1:
        sum=add(a,b);
        printf("Addition of %d & %d is %d",a,b,sum);
        break;

        case 2:
        diff=difference(a,b);
        printf("\n Subtraction of %d & %d is %d",a,b,diff);
        break;
        
        case 3:
        pro=product(a,b);
        printf("\n Multiplication of %d & %d is %d",a,b,pro);
        break;
       
        case 4:
        div=division(a,b);
        printf("\n Division of %d & %d is %d",a,b,div);
        break;

        default: printf("Invalid Entry");
    }
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


