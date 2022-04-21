#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10], numberOfRows1, numberOfCols1, numberOfRows2, numberOfCols2, sum = 0;

    printf("Enter the rows & col numbers for A Array : ");
    scanf("%d %d", &numberOfRows1, &numberOfCols1);
    printf("Enter the rows & col numbers for B Array : ");
    scanf("%d %d", &numberOfRows2, &numberOfCols2);

    while (numberOfCols1 != numberOfRows2) // if numberOfCols1 != numberOfRows1 then it will taking that again untill it satisfied...for that
    {
        printf("Error..............................Again\n"); // reason we use while loop......

        printf("Enter the rows & col numbers for A Array : ");
        scanf("%d %d", &numberOfRows1, &numberOfCols1);
        printf("Enter the rows & col numbers for B Array : ");
        scanf("%d %d", &numberOfRows2, &numberOfCols2);
    }

    printf("Enter the elements of Array A :\n");
    for (int i = 0; i < numberOfRows1; i++)
    {
        for (int j = 0; j < numberOfCols1; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of Array B :\n");
    for (int i = 0; i < numberOfRows2; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("Printing the elements of Array A :\n");
    for (int i = 0; i < numberOfRows1; i++)
    {
        for (int j = 0; j < numberOfCols1; j++)
        {
            printf("%2d", A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the elements of Array B :\n");
    for (int i = 0; i < numberOfRows2; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            printf("%2d", B[i][j]);
        }
        printf("\n");
    }

    // Multiplying Matrix:
    for (int i = 0; i < numberOfRows1; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            for (int k = 0; k < numberOfCols1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }

    printf("Printing the Array C : \n");
    for (int i = 0; i < numberOfRows1; i++)
    {
        for (int j = 0; j < numberOfCols2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Enter the rows & col numbers for A Array : 3 2
// Enter the rows & col numbers for B Array : 2 3
// Enter the elements of Array A :
// [0][0] = 1
// [0][1] = 2

// [1][0] = 3
// [1][1] = 4

// [2][0] = 5
// [2][1] = 6

// Enter the elements of Array B :
// [0][0] = 1
// [0][1] = 2
// [0][2] = 3

// [1][0] = 4
// [1][1] = 5
// [1][2] = 6

// Printing the elements of Array A :
//  1 2
//  3 4
//  5 6
// Printing the elements of Array B :
//  1 2 3
//  4 5 6
// Printing the Array C :
// 9 12 15
// 19 26 33
// 29 40 51