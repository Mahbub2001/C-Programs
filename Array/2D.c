#include <stdio.h>
int main()
{
    int A[3][4];

    printf("Enter the value : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("[%d][%d] =%2d  ", i, j, A[i][j]);//2d for line scaling......
        }
        printf("\n");
    }

    return 0;
}