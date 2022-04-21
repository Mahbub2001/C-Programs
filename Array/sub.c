#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], numberOfRow, numberOfCols;

    printf("Enter the row and column number that you want : ");
    scanf("%d %d", &numberOfRow, &numberOfCols);

    printf("Enter the elements of Array A: \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of Array B: \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("Printing the elements of Array A  : \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d", A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the elements of Array B  : \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d", B[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
        printf("\n");
    }

    printf("Printing the elements of Array C : \n");
    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}