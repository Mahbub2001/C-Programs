#include <stdio.h>
int size;
int find_max_min(int a[30], int *max, int *min)
{
    static int i = 0;
    if (i < size)
    {
        if (*max < a[i])
        {
            *max = a[i];
        }
        if (*min > a[i])
        {
            *min = a[i];
        }

        i++;
        find_max_min(a, max, min);
    }
    else
    {
        return *max;
        return *min;
    }
}
int main()
{
    int a[30];

    printf("Enter the size that you want: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = 0, min = a[0];
   
    find_max_min(a, &max, &min);
    printf("%d\n", max);
    printf("\n%d", min);

    return 0;
}