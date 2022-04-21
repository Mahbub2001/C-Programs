#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], numberOfRows, numberOfCols;

    printf("Enter NumberOfRows & NumberOfCols : \n");
    scanf("%d %d", &numberOfRows, &numberOfCols); // Input rows & cols number from User.....

    printf("Enter the elements of Array A : \n"); // Input A matrix
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the elements of Array B : \n"); // Input B matrix
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("Print the Array A : \n"); // Printing  A matrix
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Print the Array B : \n"); // Printing B matrix
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d ", B[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < numberOfRows; i++) // Adding A & B matrix.......
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSo, A + B = \n");// Printing the new matrix.......
    printf("\n"); 
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            printf("%2d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}