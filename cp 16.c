#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10],c[10][10];
    int r, col, i, j;
    printf("Enter rows and coloumns: ");
    scanf("%d %d", &r, &col);
    printf("Enter Matrix A:\n");

    for (i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);

        }
    }
    printf("Enter Matrix B:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    //addition//
    printf("\nAddition:\n");
    for(i =  0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);

        }
        printf("\n");

    }
     // subtrcation//
     printf("nSubtraction: \n");
     for(i = 0; i < r; i++)
     {
         for(j = 0; j < col; j++)
         {
             c[i][j] = a[i][j] - b[i][j];
             printf("%d ", c[i][j]);

         }
         printf("\n");
     }
         // Transpose //
         printf("\nTranspose of A:\n");
         for(i = 0; i < col; i++)
         {
             for(j = 0; j < r; j++)
             {
                 printf("%d ", a[j][i]);


             }
             printf("\n");
         }

    return 0;
}
