// C program to count number of triangles that can be
// formed from given array
#include <stdio.h>
#include <stdlib.h> //for use qsort

/* Following function is needed for library function
qsort(). Refer
http:// www.cplusplus.com/reference/clibrary/cstdlib/qsort/ */
int comp(const void *a, const void *b)
{
    return *(int *)a > *(int *)b;
}

// Function to count all possible triangles with arr[]
// elements
int findNumberOfTriangles(int A[], int size)
{
    // Sort the array elements in non-decreasing order
    qsort(A, size, sizeof(A[0]), comp);

    // Initialize count of triangles
    int count = 0;

    // Fix the first element. We need to run till n-3
    // as the other two elements are selected from
    // arr[i+1...n-1]
    for (int i = 0; i < size - 2; ++i)
    {
        // Initialize index of the rightmost third
        // element
        int k = i + 2;

        // Fix the second element
        for (int j = i + 1; j < size; ++j)
        {
            // Find the rightmost element which is
            // smaller than the sum of two fixed elements
            // The important thing to note here is, we
            // use the previous value of k. If value of
            // arr[i] + arr[j-1] was greater than arr[k],
            // then arr[i] + arr[j] must be greater than k,
            // because the array is sorted.
            while (k < size && A[i] + A[j] > A[k])
            {
                ++k;
            }

            // Total number of possible triangles that can
            // be formed with the two fixed elements is
            // k - j - 1. The two fixed elements are arr[i]
            // and arr[j]. All elements between arr[j+1]/ to
            // arr[k-1] can form a triangle with arr[i] and arr[j].
            // One is subtracted from k because k is incremented
            // one extra in above while loop.
            // k will always be greater than j. If j becomes equal
            // to k, then above loop will increment k, because arr[k]
            // + arr[i] is always greater than arr[k]
            if (k > j)
            {
                count += k - j - 1;
            }
        }
    }

    return count;
}

// Driver program to test above functionarr[j+1]
int main()
{
    // int A[] = { 6,18,9,7,10 };
    // int size = sizeof(A) / sizeof(A[0]);

    int A[100], size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Scanning thr array A : ");
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

    printf("\nTotal number of triangles possible is %d ",
           findNumberOfTriangles(A, size));

    return 0;
}
