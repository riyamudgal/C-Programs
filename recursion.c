#include<stdio.h>
#include<conio.h>

int fac(int n)
{
    if(n<1)
    {
        return 1;

    }
    return n*fac(n-1);
}

void main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);

    int f=fac(num);

    printf("factorial of %d is %d", num,f);

}