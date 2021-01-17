#include<stdio.h>
#include<conio.h>
int fibonacci(int num)
{
    int i, n1=0,n2=1,n3;
    for(i=0;i<num;i++)
{
    n3=n1+n2;
    printf("\n %d", n3);
    n1=n2;
    n2=n3;
}
return 0;
}
void main()
{
    int number;
    printf("Enter digit number upto which you want to printf fibonacci series");
    scanf("%d", &number);
    fibonacci(number);

}