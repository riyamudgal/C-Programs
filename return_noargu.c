#include<stdio.h>
#include<conio.h>


int minimum()
{
    int num1,num2,num3;
    printf("enter any 3 numbers");
    scanf("%d %d", &num1 ,&num2 ,&num3);
    if(num1<num2)
    {
        if(num1<num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
        else
        {
            if(num2<num3)
            {
                return num2;
            }
            else 
            {
                return num3;
            }
        }
       
}        

int main()
{
   int min= minimum();
     printf("Smallest number is %d", min);
return 0;
}

