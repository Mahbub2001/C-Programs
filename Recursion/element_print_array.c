#include <stdio.h>
void PrintArray(int a[], int i, int n)
{

    if (i >= n)
    {
        return;
    }
    else
    {
        printf("%d ", a[i]);
        PrintArray(a, i + 1, n);
    }
}
int main()
{
    int n, a[100];
    printf("Enter your array size:");
    scanf("%d", &n);

    printf("Enter the Array Element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array Element Are:");
    PrintArray(a, 0, n);
}