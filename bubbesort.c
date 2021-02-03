#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d", &n);

    int arr[n],i,j,temp;
    printf("\n Enter array size");
    for(i=0;i<n;i++)
    {
        printf("\n Enter %d element", i);
        scanf("%d", &arr[i]);
    }
    printf("The array is");
    for(i=0;i<n;i++)
    {
    printf(" %d ",arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        printf("\n Sorted array is \n");
        for(i=0;i<n;i++)
        {
            printf(" %d ", arr[i]);
        }
        return 0;
    }