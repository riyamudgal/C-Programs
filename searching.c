#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10]={1,4,7,89,45,76,23,67,23,10};
    int element,i, f=0;

    printf("\n Array is -> ");
    for(i=0;i<10;i++)
    {
        printf("\n %d", arr[i]);
    }
    printf("\n Enter Element you want to search");
    scanf("%d", &element);

    for(i=0;i<10;i++)
    {
        if(arr[i]==element)
        {
           f=1; 
           break;
        }
    }
    if(f==1)
    {  
        printf("\n %d Element found at %d index", element,i );
    }
     else
     {
        printf("\n No such element is present in the array");
    }
        
    return 0;
}