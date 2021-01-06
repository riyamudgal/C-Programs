#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,lines=4;

    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=lines;j++)
        {
            if(i==j)
            {
            printf("*");
            }
        
            else
            {
                printf("0");
            }
            
        }
        j--;
        printf("*");
        while(j>=1)
        {
            if(i==j)
            {
                printf("*");
            }
            else
            {
                printf("0");
               
            }
            j--;
        }
            printf("\n");
            
        
    }
}