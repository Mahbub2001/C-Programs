#include <stdio.h>
int rowsSum(int A[100][100], int rows, int cols);
int colsSum(int A[100][100], int rows, int cols);
int main()
{
    int A[100][100], rows, cols;
    printf("Enter the rows number that you want : ");
    scanf("%d", &rows);
    printf("Enter the col number that you want : ");
    scanf("%d", &cols);

    printf("Scanning the elements of array : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the elements of array : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    rowsSum(A, rows, cols);

    colsSum(A, rows, cols);

    return 0;
}
int rowsSum(int A[100][100], int rows, int cols)
{
    int sum, j;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + A[i][j];
        }
        printf("Row number %d sum is =%d\n", i + 1, sum);
    }

    return 0;
}
int colsSum(int A[100][100], int rows, int cols)
{
    int sum, j;
    for (int i = 0; i < cols; i++)
    {
        sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum = sum + A[j][i];
        }
        printf("Row number %d sum is =%d\n", j + 1, sum);
    }

    return 0;
}