#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[100]={12,43,87,23,90,54,78,34,77,1};

    int position,newelement,i;
    for(i=0;i<10;i++)
    {
        printf("%d \n", arr[i]);
    }

    printf("Enter new element you want to enter");
    scanf("%d",&newelement);
    
    printf("Enter the position at which you want to enter new element");
    scanf("%d",&position);

    for(i=0;i<10;i++)
    {
        arr[position-1]=newelement;
        printf("%d \n", arr[i]);
    }
    }