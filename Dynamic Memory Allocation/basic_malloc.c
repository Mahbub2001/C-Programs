#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, *ptr, n;

    printf("Enter the total number of value : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Input the elelments : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Printing the elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(ptr + i));
    }
    free(ptr);//for free this memory ...........after printing .......

    return 0;
}