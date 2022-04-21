#include <stdio.h>
int main()
{
    int A[100][100], B[100][100], r1, c1, r2, c2, flag = 0;
    printf("Enter the r1 of Array A : ");
    scanf("%d", &r1);
    printf("Enter the c1 of Array A : ");
    scanf("%d", &c1);
    printf("Enter the r2 of Array B : ");
    scanf("%d", &r2);
    printf("Enter the c2 of Array B : ");
    scanf("%d", &c2);

    printf("Inputing the Array A : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Inputing the Array B : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("Printing the Array A : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Printing the Array B : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%2d ", B[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (A[i][j] != B[i][j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("The matrix are equal");
    }
    else
    {
        printf("The matrix are not equal");
    }

    return 0;
}

