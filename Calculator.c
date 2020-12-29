#include<stdio.h>

int main()
{
    char operator;
    int a,b;

    printf("Enter Two operands");
    scanf("%lf %lf", &a,&b);

    printf("Enter an operator ");
    scanf("%c", &operator);

    

    switch(operator)
    {
        case '+':
        printf("%.1lf + %.1lf = %.1lf", a,b,a+b);
        break;

        case '-':
        printf("%.1lf - %.1lf = %.1lf", a,b,a-b);
        break;

        case '*':
        printf("%.1lf * %.1lf = %.1lf", a,b,a*b);
        break;

        case '/':
        printf("%.1lf / %.1lf = %.1lf", a,b,a/b);
        break;

        default:
        printf("error! operator is not correct");

    }
    return 0;
}