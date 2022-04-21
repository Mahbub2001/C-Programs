// Write a program in C to count a total number of duplicate elements in an array.
#include <stdio.h>
int main()
{
    int numbers, A[100], count = 0;
    printf("Enter the numbers that you want : ");
    scanf("%d", &numbers);

    printf("Enter the all numbers that you want : \n");
    for (int i = 0; i < numbers; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Printing the elements of Array A : \n");
    for (int i = 0; i < numbers; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nThe duplicate value = ");
    for (int i = 0; i < numbers; i++)
    {
        for (int j = i + 1; j < numbers; j++)
        {
            if (A[i] == A[j])
            {
                printf("%d ", A[j]); // for printing duplicates.....
                count++;             // for counting duplicate elelments number...
                break;
            }
        }
    }
    printf("\nThe number of duplicate number is = %d", count);

    return 0;
}