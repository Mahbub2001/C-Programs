#include <stdio.h>
int main()
{
    int A[100];
    int i, size, pos, element, found = 0;

    printf("Enter how many elements : ");
    scanf("%d", &size);

    printf("Enter the elements\n");
    for (i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Input array elements are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nEnter the element to be deleted : ");
    scanf("%d", &element);

    for (i = 0; i < size; i++)
    {
        if (A[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1)
    {
        for (i = pos; i < size - 1; i++)
        {
            A[i] = A[i + 1];
        }

        printf("The resultant vector is : ");
        for (i = 0; i < size - 1; i++)
        {
            printf("%d ", A[i]);
        }
    }
    else
    {
        printf("Element %d is not found in the Array\n", element);
    }

    return 0;
}