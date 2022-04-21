// Write a program to take  m x n matrix as input and then find the maximum and minimum values from that matrix. 										            7
// Input:
// Enter value for m and n: 4 3
// Enter matrix of 4 x 3 size
// 1 2 6
// 9 7 5
// 6 3 2
// 5 7 3
// Output:
// Maximum value: 9
// Minimum value: 1

#include <stdio.h>

int maximum(int number[100][100], int rows, int cols)
{
    int max = number[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max < number[i][j])
            {
                max = number[i][j];
            }
        }
    }

    printf("The maximum value is = %d\n", max);

    return 0;
}
int minimum(int number[100][100], int rows, int cols)
{
    int min = number[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (min > number[i][j])
            {
                min = number[i][j];
            }
        }
    }

    printf("The minimum value is = %d\n", min);

    return 0;
}

int main()
{
    int number[100][100], row, col;
    printf("Enter the rows number :  ");
    scanf("%d", &row);
    printf("Enter the cols number :  ");
    scanf("%d", &col);

    printf("Enter the numbers : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &number[i][j]);
        }
    }

    printf("Printing the elements of Array : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%2d ", number[i][j]);
        }
        printf("\n");
    }

    maximum(number, row, col);

    minimum(number, row, col);

    return 0;
}