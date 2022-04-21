#include <stdio.h>
// Function to left-rotate an array by one position
void leftRotateByOne(int A[], int size)
{
    int first = A[0];
    for (int i = 0; i < size - 1; i++)
    {
        A[i] = A[i + 1];
    }

    A[size - 1] = first;
}

// Function to left-rotate an array by `r` positions
void leftRotate(int A[], int k, int size)
{
    // base case: invalid input
    if (k < 0 || k >= size)
    {
        return;
    }

    for (int i = 0; i < k; i++)
    {
        leftRotateByOne(A, size);
    }
}

int main(void)
{
    int A[100], size;
    printf("Enter the size of the Array : ");
    scanf("%d", &size);
    printf("Enter the Array elements : ");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("Printing the Array elements : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    int k;
    printf("\nEnter the number that you want to rotate : ");
    scanf("%d", &k);

    leftRotate(A, k, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
