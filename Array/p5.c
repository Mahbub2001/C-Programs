// C Exercises: Find the row with maximum number of 1s


#include <stdio.h>

int test(int A[100][100], int rows, int cols) // counting 1 in every rows......
{
    int count, counter[100];
    for (int k = 0; k < rows; k++)
    {

        for (int i = 0; i < k + 1; i++)
        {
            count = 0;
            for (int j = 0; j < cols; j++)
            {
                if (A[i][j] == 1)
                {
                    count++;
                }
            }
        }
        printf("Row number %d; count is = %d\n", k, count);
    }
    return 0;
}

int main()
{
    int A[100][100], rows, cols, count = 0;
    printf("Enter the row number of the Array : ");
    scanf("%d", &rows);
    printf("Enter the cols number of the Array : ");
    scanf("%d", &cols);

    printf("Scanning the elements : ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Printing the elements : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    test(A, rows, cols);

    return 0;
}