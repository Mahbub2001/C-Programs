#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, i;

    printf("Enter the elements number that you want : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));

    printf("Input the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Printing the elements : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    /////now main work ............
    int increase_number;
    printf("\nEnter the number that you want to increase : ");
    scanf("%d", &increase_number);

    int *ptr1 = (int *)realloc(ptr, increase_number * sizeof(int));

    printf("The previous memory location is = %d\n"
           "The updated memory location is = %d",
           ptr, ptr1);

    printf("\nThe updated elements are = ");
    for (i = 0; i < increase_number; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }
    free(ptr);

    return 0;
}

