#include <stdio.h>

// Function to right-rotate an array by one position
void rightRotateByOne(int A[], int size)
{
    int last = A[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        A[i + 1] = A[i];
    }

    A[0] = last;
}

// Function to right-rotate an array by `k` positions
void rightRotate(int A[], int k, int size)
{
    // base case: invalid input
    if (k < 0 || k >= size)
    {
        return;
    }

    for (int i = 0; i < k; i++)
    {
        rightRotateByOne(A, size);
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

    rightRotate(A, k, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

// #include <stdio.h>

// int main(void)
// {
//     char answer[30];

//     printf("Are you ready for blast off? ");
//     scanf("%s", answer);
//     if (answer == "yes")
//     {
//         printf("Okay then. Let's go!!!\n");
//     }
//     else
//     {
//         printf("Okay. Maybe another time!\n");
//     }

//     return (0);
// }