#include<stdio.h>

int main()
{
  int num,p,i,ans=1;
  printf("Enter a base number");
  scanf("%d", &num);

  printf("\n Enter power");
  scanf("%d",&p);

  for(i=1;i<=p;i++)
  {
      ans=ans*num;
  }
  printf("%d", ans);
  return 0;
}