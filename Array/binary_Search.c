// C program to implement iterative Binary Search
#include <stdio.h>

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            l = mid + 1;

        // If x is smaller, ignore right half
        else
            r = mid - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

int main(void)
{
    int arr[100], size;
    printf("Enter the size of the Array A : ");
    scanf("%d", &size);

    printf("Scanning the Array A : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int value;
    printf("\nEnter the value that you want to search : ");
    scanf("%d", &value);

    int result = binarySearch(arr, 0, size - 1, value);
    (result == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            result);
    return 0;
}
