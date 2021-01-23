#include<stdio.h>

void main()
{
    int r1,r2,c1,c2;

    printf("Enter row of First Matrix");
    scanf("%d",&r1);
    printf("Enter column of first matrix");
    scanf("%d", &c1);

    printf("Enter row of second Matrix");
    scanf("%d",&r2);
    printf("\n Enter column of second matrix");
    scanf("%d", &c2);


    int mat1[r1][c1], mat2[r2][c2],i,j,k,mul[r1][c2];
    printf("Enter elements of first matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           scanf("%d", &mat2[i][j]);
        }
    }

    printf("First matrix is : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf(" %d ", mat1[i][j]);
        }
        printf("\n ");

    }

     printf("Second matrix is : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf(" %d ", mat2[i][j]);
        }
        printf("\n ");
        
    }
    if(c1==r1)
    {
    
    printf("Resultant Matrix, after multiplication of 2 matrices");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
             mul[i][j]=0;

         }
     }  
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
             for(k=0;k<c1;k++)
             {
                 mul[i][j]=mat1[i][k]*mat2[k][j];
             }
         }
     } 
     
    for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
    printf(" %d ", mul[i][j]);
         }
         printf("\n ");
     }
    }
    else
    {
        printf("\n Multiplication is not posiible");
    }
    

}