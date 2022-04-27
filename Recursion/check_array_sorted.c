// check if an array is sorted(Strictly increasing)
#include <stdio.h>
#include <stdbool.h>

bool issorted(int arr[], int index, int size)
{
    if (index == size - 1) // -1 na dile exception asbe...karon array te oi index thakbei na..
    {
        return true;
    }

    if (arr[index] < arr[index + 1])
    {
        return issorted(arr, index + 1, size);
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[30], size, index;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("\nEnter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (issorted(arr, 0, size))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}