// Write a program in C to find a subarray with given sum from the given array.
#include <stdio.h>

void print(int A[], int i, int j) // Utility function to print subarray A[i, j]
{
    printf("[%d ... %d] --- { ", i, j);
    for (int k = i; k <= j; k++)
    {
        printf("%d ", A[k]);
    }
    printf("}\n");
}

void findSubarrays(int A[], int size, int target) // Function to find subarrays with the given sum in an array
{
    for (int i = 0; i < size; i++)
    {
        int sum_so_far = 0;

        for (int j = i; j < size; j++) // consider all subarrays starting from `i` and ending at `j`
        {
            sum_so_far = sum_so_far + A[j]; // sum of elements so far

            if (sum_so_far == target) // if the sum so far is equal to the given sum
            {
                print(A, i, j);
            }
        }
    }
}

int main()
{
    int A[10], size, sum;

    printf("Enter the size of the Array A : ");
    scanf("%d", &size);

    printf("Scanning the Array A : \n");
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

    int target;
    printf("\nEnter your target sum : ");
    scanf("%d", &target);

    findSubarrays(A, size, target);

    return 0;
}
