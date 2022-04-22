#include <stdio.h>

int max_min(int A[100], int size, int *min, int *max)
{
    *max = *min = A[0];
    for (int i = 1; i < size; i++)
    {
        if (A[i] > *max)
        {
            *max = A[i];
        }
        if (A[i] < *min)
        {
            *min = A[i];
        }
    }

    return 0;
}

int main()
{
    int A[100], size;
    int min, max;
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    printf("Scanning the Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }

    max_min(A, size, &min, &max);
    printf("The maximum value of the Array is : %d", max);
    printf("\nThe minimum value of the Array is : %d", min);

    return 0;
}
