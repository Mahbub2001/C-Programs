//  Write a program in C to separate odd and even integers in separate arrays.
#include <stdio.h>
int main()
{
    int A[100], evenArray[100], oddArray[100], number, j = 0, k = 0;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    printf("Scanning the elements that you want : \n");
    for (int i = 0; i < number; i++)
    {
        printf("[%d] = ",i);
        scanf("%d", &A[i]);
    }
    printf("Printing the Array A : \n");
    for (int i = 0; i < number; i++)
    {
        printf("[%d] = %d\n", i + 1, A[i]);
    }

    for (int i = 0; i < number; i++)
    {
        if (A[i] % 2 == 0)
        {
            evenArray[j] = A[i];
            j++;
        }
        else
        {
            oddArray[k] = A[i];
            k++;
        }
    }
    printf("Printing the Even Number : ");
    for (int i = 0; i < j; i++)   //if we don't use i<j it will shown garbadge value.. because it will get some extra space...........
    {
        printf("%d ", evenArray[i]);
    }
    printf("\nPrinting the Odd Number : ");
    for (int i = 0; i < k; i++)//if we don't use i<k it will shown garbadge value.. because it will get some extra space...........
    {
        printf("%d ", oddArray[i]);
    }

    return 0;
}