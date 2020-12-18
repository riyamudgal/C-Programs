#include<stdio.h>
#include<conio.h>
void main(int argc, char const *argv[])
{
    int salary,n;
    float loss;
    float profit;
    

    printf("Enter Salary of the employee");
    scanf("%d", &salary);

    printf("Enter if person smokes");
    scanf("%d", &n);

    if(n==1)
    {
        if(salary<=10000)
           {
               loss=(salary*10)/100;
                salary=salary-loss;
                 printf("New Salary %d", salary);
           }
        else
            {
              loss=(salary*15)/100;
              salary=salary-loss;
               printf("New Salary %d", salary);  
            }
        }
        else
        {
            if(salary<=10000)
            {
                profit=(salary*10)/100;
                salary=salary+profit;
                printf("New Salary %d", salary);
            }
            else
            {
                profit=(salary*15)/100;
                salary=salary+profit;
                printf("New Salary %d", salary);
            }
        }
}
            
        
        
        



