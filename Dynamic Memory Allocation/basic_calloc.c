#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, i;

    printf("Enter the elements number that you want : ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

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

    free(ptr);

    return 0;
}