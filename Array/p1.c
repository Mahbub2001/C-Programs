// // Find a pair with given sum in the array

// Brute Force Algorithm

#include <stdio.h>

void main()
{
    int flag = 0, i = 0, A[20], n, k;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    while (i < n)
    {
        scanf("%d", &A[i]);
        i++;
    }

    printf("Enter the sum: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == k)
            {
                printf("(%d,%d) \n", A[i], A[j]);
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("No pairs found.");
    }
}



//Hashing Algorithm
// #include <stdio.h>
// #define MAX 100000

// void PairsWithHash(int arr[], int arr_size, int sum)
// {
//     int i, t;
//     int flag = 0;

//     _Bool s[MAX] = {0}; /*initialize hash set as 0*/

//     for (i = 0; i < arr_size; i++)
//     {
//         t = sum - arr[i];
//         if (s[t] == 1)
//         {
//             printf("Pairs are: (%d, %d) \n", arr[i], t);
//             flag = 1;
//         }

//         s[arr[i]] = 1;
//     }
//     if (flag == 0)
//     {
//         printf("No pairs found");
//     }
// }

// void main()
// {
//     int i = 0, A[20], n, k;

//     printf("Enter number of elements in the array: ");
//     scanf("%d", &n);

//     printf("Enter the array elements: ");
//     while (i < n)
//     {
//         scanf("%d", &A[i]);
//         i++;
//     }

//     printf("Enter the sum: ");
//     scanf("%d", &k);
//     PairsWithHash(A, n, k);
// }