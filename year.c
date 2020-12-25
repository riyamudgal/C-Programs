#include<stdio.h>
void main()
{
    int year;
    printf("Enter A Year");
    scanf("%d", &year);

    if(year%4==0)
    {
        printf("%d is a Leap year",year);
    }
    else
    {
        printf("%d is not a Leap Year",year);
        
    }
    
}
