#include<stdio.h>

void main()
{
    int i,j,a[3][3],b[3][3];
    printf("Enter a 3*3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("a[%d][%d]= ",i,j);
        scanf("%d", &a[i][j]);
    }
    }
    printf("\n The entered matrix = \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\n The transpose of the matrix \n");

    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
    }

}