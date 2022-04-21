//  Write a program in C to print all unique elements in an array.

#include <stdio.h>
#include <stdbool.h>
int unique_elements(int A[100], int lenght);
int main()
{
    int A[100], number, count = 0;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    printf("Input the elements : \n");
    for (int i = 0; i < number; i++)
    {
        printf("[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Printing the Arrray elements : \n");
    for (int i = 0; i < number; i++)
    {
        printf("number [%d] = %d\n", i + 1, A[i]);
    }

    printf("Unique numbers are : \n");
    unique_elements(A, number);

    return 0;
}

int unique_elements(int A[100], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        bool match_found = false;
        for (int j = 0; j < lenght; j++)
        {
            if (A[i] == A[j] && i != j)
            {
                match_found = true;
            }
        }
        if (match_found == false)
        {
            printf("%d ", A[i]);
        }
    }
}