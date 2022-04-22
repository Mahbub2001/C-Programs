#include <stdio.h>
void copying(int a[100], int b[100], int size);
int main()
{
    int n, a[100], b[100];
    printf("Enter your array size:");
    scanf("%d", &n);

    printf("Enter the Array Element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    copying(a, b, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", b[i]);
    }

    return 0;
}
void copying(int a[100], int b[100], int size)
{
    static int i = 0;
    b[i] = a[i];
    if (i >= size) // It is the ascii value of null. It is use to identify whether there is null present in the string or not while performing string oeration.
    {
        return;
    }
    else
    {
        i = i + 1;
        copying(a, b, size);
    }
}