// C Exercises: Move all zeroes to the end of a given array

#include <stdio.h>

int Zero(int A[100], int size)
{

    int zero;

    for (int i = 0; i < size; i++)
    {
        if (A[i] != 0)
        {
            A[zero] = A[i];
            zero++;
        }
    }

    for (int i = zero; i < size; i++)
    {
        A[i] = 0;
    }
    

    return 0;
}

int main()
{
    int A[100], size;
    printf("Enter the size of the Array A : ");
    scanf("%d", &size);
    printf("Scanning the Array A: ");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("Printing the Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    Zero(A, size);
    printf("Printing the updated Elements  : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    

    return 0;
}