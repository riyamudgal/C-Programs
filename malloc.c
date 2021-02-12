#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr,sum=0;
    int i,n;
    printf("\n Enter number of elements -> ");
    scanf("%d", &n);

    ptr=(float*)malloc(n*sizeof(float));

    if(ptr==NULL)
    {
        printf("Sorry ! unable to allocate memory");
        exit(0);
    }
    printf("\n Enter %d elememts ->", n);
    for(i=0;i<n;i++)
    {
        scanf("%f", ptr+i);
        sum=sum+*(ptr+i);
    }
    printf("\n Sum of %d numbers is - > %f",n, sum);
    free(ptr);

    return 0;
}