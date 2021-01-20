#include<stdio.h>

void main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d", &n);
    
    int arr[n],position;
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of element you want to delete");
    scanf("%d", &position);

    for(int i=0;i<n;i++)
    {
            for(int i=position-1;i<n;i++)
            {
                arr[i]=arr[i+1];
            }
            for(i=0;i<n-1;i++)
            {
                printf("\n %d", arr[i]);
            }
        }
        
        
    
}