#include<stdio.h>
#include<conio.h>
void main()
{
    int ans,a,b;
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
        sum=add(num1,num2);
        printf("Addition of %d & %d is")

        case 2:
        diff=difference(num1,num2);
        printf("Subtraction of %d & %d is")
        
        case 3:
        pro=product(num1,num2);
        printf("Multiplication of %d & %d is")
       
        case 4:
        div=division(num1,num2);
        printf("Division of %d & %d is")

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


