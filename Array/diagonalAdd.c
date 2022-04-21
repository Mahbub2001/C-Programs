// #include <stdio.h>
// int main()
// {

//     int A[10][10], numberOfRows, numberOfCols, sum = 0;

//     printf("Enter the rows number of the Arary : ");
//     scanf("%d", &numberOfRows);
//     printf("Enter the cols number of the Array : ");
//     scanf("%d", &numberOfCols);

//     printf("Enter the element of A mtrix : \n");
//     for (int i = 0; i < numberOfRows; i++)
//     {
//         for (int j = 0; j < numberOfCols; j++)
//         {
//             printf("[%2d][%2d] = ", i, j);
//             scanf("%d", &A[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Printing the Matrix A : \n");
//     for (int i = 0; i < numberOfRows; i++)
//     {
//         for (int j = 0; j < numberOfCols; j++)
//         {
//             printf("%2d", A[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Diagonal elements are : \n");
//     for (int i = 0; i < numberOfRows; i++)
//     {
//         for (int j = 0; j < numberOfCols; j++)
//         {
//             if (i == j) // only this times
//             {
//                 printf(" %2d ", A[i][j]);
//                 sum = sum + A[i][j];
//             }
//         }
//     }
//     printf("\nThe sum is = %d", sum);

//     return 0;
// }


//Left diagonal

#include <stdio.h>
int main()
{
    int A[10][10], numberOfRows, numberOfCols, sum = 0;
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
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal elements are : \n");
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0 ; j < numberOfCols ; j++)
        {
            if (i+j == numberOfRows - 1) // only this times
            {
                printf("%4d ", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nThe sum is = %d", sum);

    return 0;
}
