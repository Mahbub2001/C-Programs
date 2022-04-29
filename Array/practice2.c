// Write a program that deletes all the elements
// in an array which match a search key.
#include <stdio.h>

int main()
{
    int a[100];
    int size;
    int delete = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Input elelments of the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    printf("Enter Number To Delete: ");
    scanf("%d", &delete);

    int i = 0;
    while (i < size)
    {
        if (a[i] == delete)
        {
            if (i < (size - 1))
            {
                for (int j = i; j < (size - 1); j++)
                    a[j] = a[j + 1];
            }

            size--;
        }
        else
        {
            i++;
        }
    }

    printf("The updated array is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}