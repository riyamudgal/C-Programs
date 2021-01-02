#include<stdio.h>
#include<conio.h>
void large()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d",a);
    }
    else
    {
        if(b>c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
        
    }
    
}
int main()
{
    large();
     return 0;
}