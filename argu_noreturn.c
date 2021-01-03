#include<stdio.h>
#include<conio.h>
void maximum(int x , int y,int z)
{
    if(x>y && x>z)
    {
        printf("%d is largest", x);
    }
    else if(y>z)
    {
        printf("%d is largest", y);
    }
    else
    {
        printf("%d is largest", z);
    }
    
}
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    maximum(a,b,c);
}