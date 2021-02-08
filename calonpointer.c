#include<stdio.h>
int main()
{
  int a,b,sum=0,dif=0,pro=0,div=0;
  int *p1,*p2;

printf("Enter the value of A => "); scanf("%d",&a);
printf("Enter the value of B => "); scanf("%d",&b);

 p1=&a; p2=&b;

sum = *p1+*p2;

printf("Sum of 2 numbers is => %d",sum);

dif = *p1-*p2;
printf("\n Difference of 2 numbers is => %d",dif);

pro = *p1*(*p2);
printf("\n Product of 2 numbers is => %d",pro);

div = *p1/(*p2);
printf("\n Division of 2 numbers is => %d",div);
return 0;
}
