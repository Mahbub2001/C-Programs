//write a program that searches from a given value in an array and print the first and the last index in which that vlaue appears
#include <stdio.h>
#include <string.h>
static int first = -1; // staric nite hbe jate kre constant thake;
static int last = -1;

int size;

void find(int str[30], int index, char element)
{
    if (index == size )
    {
        printf("The first index is : %d", first);
        printf("\nThe last index is : %d", last);
        return;
    }

    int curr_carracter = str[index];
    if (curr_carracter == element)
    {
        if (first == -1)
        {
            first = index;
        }
        else
        {
            last = index;
        }
    }
    find(str, index + 1, element);
}

int main()
{
    int str[30], element;

    printf("Enter the size that you want : ");
    scanf("%d", &size);

    printf("Enter the elements of the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &str[i]);
    }

    printf("Enter the carracter that you want to check : ");
    scanf("%d", &element);

    find(str, 0, element);

    return 0;
}