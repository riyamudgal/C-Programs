#include<stdio.h>
#include<conio.h>
int great(int a, int b,int c)
{
if(a>b)
{
    if(a>c)
    {
        return a;
    }
    else
    {  
        return c;
    }
}
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
        
    }
}
    void main()
    {
        int a,b,c,greatest;
        printf("Enter any 3 numbers");
        scanf("%d %d %d", &a,&b,&c);
        greatest=great(a,b,c);
        printf("%d is greatest among three numbers", greatest);
    }
    
