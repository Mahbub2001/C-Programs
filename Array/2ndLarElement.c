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
    
    int temp = A[0];
    printf("\nArranging by Decsending : ");
    for (int i = 0; i < size; i++)
    {
        
        for (int j = i + 1; j < size; j++)
        {
            if (A[j] > A[i])
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

// #include <stdio.h>
// int main()
// {
//     int i, j, n;
//     printf("Enter the terms of the array: ");
//     scanf("%d", &n);
//     int a[n];
//     int b[n];

//     for (i = 0; i < n; i++)
//     {
//         printf("Element %d: ", i);
//         scanf("%d", &a[i]);
//     }
//     int temp;

//     for (i = 0; i < n; i++)
//     {
//         b[i] = a[i];
//     }

//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n ; j++)
//         {
//             if (a[j] > a[i])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("The array is = ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d  ",a[i]);
//     }
    
//     printf("The second largest number is : %d\n", a[1]);
//     printf("Occurs in index: ");
//     for (i = 0; i < n; i++)
//     {

//         if (a[1] == b[i])
//         {
//             printf("%d, ", i);
//         }
//     }
// }
