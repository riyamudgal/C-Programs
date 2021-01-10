#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int data[]={12,34,89,65,98,45,76,56};
    int value;
    printf("Enter your value to seach");
    scanf("%d", &value);

    for(int i=0;i<10;i++)
    {
        if(data[i]==value)
        {
            printf("Value found at position=%d", (i+1));
        }
    }
    return 0;
    
    }