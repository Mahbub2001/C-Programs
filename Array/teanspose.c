#include <stdio.h>
int main()
{
    int A[10][10], transpose[10][10], numberOfRows, numberOfCols;

    printf("Enter the rows number of the Arary : ");
    scanf("%d", &numberOfRows);
    printf("Enter the cols number of the Array : ");
    scanf("%d", &numberOfCols);

    printf("Enter the element of A mtrix : \n");
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%2d][%2d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Printing the Matrix A : \n");
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d", A[i][j]);
        }
        printf("\n");
    }

    // transpose the array :

    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            transpose[j][i] = A[i][j];
        }
        printf("\n");
    }
    // print transpose:
    printf("Printing the matrix Transpose : \n");
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}