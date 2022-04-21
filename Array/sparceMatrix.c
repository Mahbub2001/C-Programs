// Determine whether a matrix is a sparse matrix.........
#include <stdio.h>
int main()
{
    int A[100][100], rows, cols, count = 0;
    printf("Enter the rows number of Array A : ");
    scanf("%d", &rows);
    printf("Enter the cols number of Array A : ");
    scanf("%d", &cols);

    printf("Scanning the Array A : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the Array A : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (A[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count>(rows*cols)/2)
    {
        printf("It is a Sparce Matrix ");
    }
    else
    {
        printf("It is not a Sparce Matrix ");
    }
    

    return 0;
}

