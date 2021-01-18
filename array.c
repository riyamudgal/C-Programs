#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter a number you want to enter");
    scanf("%d", &n);

    int arr[n],i;
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("Let's see how many and what elements you have entered");
     for(i=0;i<n;i++)
     {
         printf("\n Element at %d is %d", i, arr[i]);
     }


}