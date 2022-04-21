//Passing 1D Array .......................................................................................................................

// #include <stdio.h>

// int display(int x[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("[%d] = [%d]", i, x[i]);
//     }
//     return 0;
// }

// int main()
// {
//     int n, A[100];
//     printf("Enter the number that you want : ");
//     scanf("%d", &n);

//     printf("Enter the element of Array A : \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("[%d] = ", i);
//         scanf("%d", &A[i]);
//     }

//     display(A, n);//Calling the display function ....A is the Array & n is for the number ....

//     return 0;
// }



//Pssing 2D Array .......................................................................................................................

#include <stdio.h>

int display(int x[10][10], int rows, int cols)
{
    printf("Printing the elements of Array : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%2d", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int rows, cols, A[10][10];
    printf("Enter the number of row that you want : ");
    scanf("%d", &rows);
    printf("Enter the number of cols that you want : ");
    scanf("%d", &cols);

    printf("Enter the element of Array A : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    display(A, rows, cols); // Calling the display function ....A is the Array & n is for the number ....

    return 0;
}