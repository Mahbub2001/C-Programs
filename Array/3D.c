#include <stdio.h>
int main()
{
    int A[10][10][10], numberOfArrays, numberOfRows, numberOfCols;
    printf("Enter the number of Arrays do you want : ");
    scanf("%d", &numberOfArrays);
  
    printf("Enter the number of rows that you want : ");
    scanf("%d", &numberOfRows);
 
    printf("Enter the number of cols that you want : ");
    scanf("%d", &numberOfCols);

    // Inputting the elements:
    printf("Enter the elements of the Array A : \n");
    for (int i = 0; i < numberOfArrays; i++)
    {
        for (int j = 0; j < numberOfRows; j++)
        {
            for (int k = 0; k < numberOfCols; k++)
            {
                printf("[%d][%d][%d] = ", i, j, k);
                scanf("%d", &A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    // printing the elements:
    printf("Printing the elements of the Array A : \n");
    for (int i = 0; i < numberOfArrays; i++)
    {
        for (int j = 0; j < numberOfRows; j++)
        {
            for (int k = 0; k < numberOfCols; k++)
            {
                printf("%2d ", A[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}