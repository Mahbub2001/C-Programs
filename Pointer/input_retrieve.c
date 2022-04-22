/**
 * C program to input and print array elements using pointers
 */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i;
    int *ptr = arr; // Pointer to arr[0]

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array:\n");
    for (i = 0; i < size; i++)
    {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i));
    }

    printf("Array elements: ");
    for (i = 0; i < size; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d, ", *(ptr + i));
    }

    return 0;
}
// Note: (ptr + i) is equivalent to &ptr[i], similarly *(ptr + i) is equivalent to ptr[i]. Also you can use (i + ptr), i[ptr] all means the same.