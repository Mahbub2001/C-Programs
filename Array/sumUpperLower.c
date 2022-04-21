#include <stdio.h>
int main()
{
    int A[10][10], numberOfRows, numberOfCols, upperSum = 0, lowerSum = 0;

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

    // upper case & lower case sum:
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfCols; j++)
        {
            if (i < j)
            {
                upperSum = upperSum + A[i][j]; // upper side of the transpose..........
            }
            if (i > j)
            {
                lowerSum = lowerSum + A[i][j]; // lower side of the transpose.............
            }
        }
    }

    printf("The sum of the upper Triangle is = %d\n", upperSum);
    printf("The sum of the lower Triangle is = %d\n", lowerSum);

    return 0;
}

// Enter the rows number of the Arary : 3
// Enter the cols number of the Array : 3
// Enter the element of A mtrix :
// [ 0][ 0] = 1
// [ 0][ 1] = 2
// [ 0][ 2] = 3

// [ 1][ 0] = 4
// [ 1][ 1] = 5
// [ 1][ 2] = 6

// [ 2][ 0] = 7
// [ 2][ 1] = 8
// [ 2][ 2] = 9

// Printing the Matrix A :
//  1 2 3
//  4 5 6
//  7 8 9
// The sum of the upper Triangle is = 11
// The sum of the lower Triangle is = 19