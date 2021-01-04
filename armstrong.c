#include<stdio.h>
#include<conio.h>

void main()
{
    int n,digit,sum=0,num;
    printf("Enter any number");
    scanf("%d", &n);
    num=n;
    while(n!=0)
        {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==num)
    {
        printf("%d is armstrong", num);
    }
    else
    {
        printf("%d is not an armstrong", num);
    }
    
}