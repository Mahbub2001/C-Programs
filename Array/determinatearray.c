
#include <stdio.h>

int display(int A[100][100], int rows, int cols);
void getCofactor(int A[100][100], int temp[100][100], int p, int q, int n);
int determinantOfMatrix(int A[100][100], int n);

int main()
{
    int A[100][100], rows, cols;
    printf("Enter the rows number of the Array : ");
    scanf("%d", &rows);
    printf("Enter the cols number of the Array : ");
    scanf("%d", &cols);

    printf("Scanning the elements of Array A : ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    display(A, rows, cols);
    printf("Determinant of the matrix is : %d", determinantOfMatrix(A, rows));

    return 0;
}




int display(int A[100][100], int rows, int cols)
{
    printf("Printing the elements of Array A : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}




void getCofactor(int A[100][100], int temp[100][100], int p, int q, int n)
{
    int i = 0, j = 0;

    // Looping for each element of the matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            // Copying into temporary matrix only those
            // element which are not in given row and
            // column
            if (row != p && col != q)
            {
                temp[i][j++] = A[row][col];

                // Row is filled, so increase row index and
                // reset col index
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}




int determinantOfMatrix(int A[100][100], int n)
{
    int D = 0; // Initialize result

    // Base case : if matrix contains single element
    if (n == 1)
        return A[0][0];

    int temp[100][100]; // To store cofactors

    int sign = 1; // To store sign multiplier

    // Iterate for each element of first row
    for (int f = 0; f < n; f++)
    {
        // Getting Cofactor of mat[0][f]
        getCofactor(A, temp, 0, f, n);
        D += sign * A[0][f] * determinantOfMatrix(temp, n - 1);

        // terms are to be added with alternate sign
        sign = -sign;
    }

    return D;
}
