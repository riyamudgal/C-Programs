#include<stdio.h>
int main() 
{ 
  int arr[5] = { 1, 2, 3, 4, 5 }; 
  int *ptr = arr; 
  
  printf("%d\n", ptr); 

  printf("%d\n", *ptr);

   printf("%d\n", *ptr+1);
    printf("%d\n", *ptr++);

    printf("%d\n", *ptr+2);

     printf("%d\n", *ptr+3);

      printf("%d\n", *ptr+4);
  return 0; 
} 