#include <stdio.h>
int main()
{
    int A[100][100], row, col, flag = 0;
    printf("Enter the rows number of the Array : ");
    scanf("%d", &row);
    printf("Enter the col number of the Array : ");
    scanf("%d", &col);

    printf("Input the Array A : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the Array A : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j && A[i][j] != 1)
            {
                flag = -1;
                break;
            }
            else if (i != j && A[i][j] != 0)
            {
                flag = -1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("It is a IDENTITY MATRIX\n");
    }
    else
    {
        printf("It is NOT an identity matrix\n");
    }

    return 0;
}