#include <stdio.h>

int main()
{
    int A[100], index1, B[100], index2, merge[100], index3;

    printf("Enter the index number of Array A : ");
    scanf("%d", &index1);
    printf("Enter the index number of Array B : ");
    scanf("%d", &index2);

    printf("Scanning the Array A : \n");
    for (int i = 0; i < index1; i++)
    {
        printf("[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Scanning the Array B : \n");
    for (int i = 0; i < index2; i++)
    {
        printf("[%d] = ", i + 1);
        scanf("%d", &B[i]);
    }

    printf("Printing the Array A : \n");
    for (int i = 0; i < index1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nPrinting the Array B : \n");
    for (int i = 0; i < index2; i++)
    {
        printf("%d ", B[i]);
    }

    // merging the element of Array A and B:

    index3 = index1 + index2; // merging er jnno space bere jabe tai duita space jog kore mot jayga count kora hyece................

    for (int i = 0; i < index1; i++)
    {
        merge[i] = A[i];
    }

    int k = index1; // k is for expanding the place of array by index1.................
    for (int i = 0; i < index2; i++)
    {
        merge[k] = B[i];
        k++;
    }

    printf("\nPrinting the Array Merge : \n");
    for (int i = 0; i < index3; i++)
    {
        printf("%d ", merge[i]);
    }

    for (int i = 0; i < index3; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < index3; j++)
        {
            if (merge[j] > merge[i])
            {
                temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }

    printf("Printing the Array in descending serial : ");
    for (int i = 0; i < index3; i++)
    {
        printf("%d ", merge[i]);
    }
  
  
    for (int i = 0; i < index3; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < index3; j++)
        {
            if (merge[j] < merge[i])
            {
                temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }

    printf("Printing the Array in ascending serial : ");
    for (int i = 0; i < index3; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}