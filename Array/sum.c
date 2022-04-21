#include <stdio.h>
int main()
{
    int A[100][100], rows, cols, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
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

    for (int i = 0; i < 1; i++) // first row..............row 0 er jnno i<1............
    {
        for (int j = 0; j < cols; j++)
        {
            sum1 = sum1 + A[i][j];
        }
    }
    printf("\nThe sum of the first row is = %d", sum1);

    for (int i = 0; i < rows; i++) // second row
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 1) // row 1 er jnno
            {
                sum2 = sum2 + A[i][j];
            }
        }
    }
    printf("\nThe sum of the second row is = %d", sum2);

    for (int i = 0; i < rows; i++) // third row
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 2) // row 2 er jnno
            {
                sum3 = sum3 + A[i][j];
            }
        }
    }
    printf("\nThe sum of the third row is = %d", sum3);

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    for (int i = 0; i < 1; i++) // first col..............col 0 er jnno i<1............
    {
        for (int j = 0; j < rows; j++)
        {
            sum4 = sum4 + A[j][i];
        }
    }
    printf("\nThe sum of the first col is = %d", sum4);

    for (int i = 0; i < cols; i++) // second col
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == 1) // col 1 er jnno
            {
                sum5 = sum5 + A[j][i];
            }
        }
    }
    printf("\nThe sum of the second col is = %d", sum5);

    for (int i = 0; i < cols; i++) // third col
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == 2) // col 2 er jnno
            {
                sum6 = sum6 + A[j][i];
            }
        }
    }
    printf("\nThe sum of the third col is = %d", sum6);

    return 0;
}
