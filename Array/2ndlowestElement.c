#include <stdio.h>
int main()
{
    int A[100], size, element;
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    printf("Scaning the elements of the Array A : ");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("Printing the elements : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nArranging by ascending : ");
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (A[j] < A[i])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    printf("The element is = %d", A[1]);
   
    return 0;
}