#include <stdio.h>
int main()
{
    int a[10][10], size;
    printf("Enter the size that you want : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix is : ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n\t\t");
    }

    return 0;
}