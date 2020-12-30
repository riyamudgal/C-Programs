#include<stdio.h>

void main()
{
   int a,b,c,choice;
   
        printf("\n 1. Press 1 for addition");
        printf("\n 1. Press 2 for subtraction");
        printf("\n 1. Press 0 for multiplication");
        printf("\n 1. Press 3 for division");

scanf("%d",&choice);

switch(choice)
{
    case 1:
    printf("Enter 2 numbers");
    scanf("%d %d", &a,&b);
    c=a+b;
    printf("Addition is %d", c);
    break;

    case 2:
    printf("Enter 2 numbers");
    scanf("%d %d", &a,&b);
    c=a-b;
    printf("Subtraction is %d", c);
    break;

    case 0:
    printf("Enter 2 numbers");
    scanf("%d %d", &a,&b);
    c=a*b;
    printf("Division is %d", c);
    break;

    case 3:
    printf("Enter 2 numbers");
    scanf("%d %d", &a,&b);
    c=a/b;
    printf("Multiplication is %d", c);
    break;

    default:
    printf("Ypu have pressed a wrong key");
    printf("Press any key to continue");
}
   
}
