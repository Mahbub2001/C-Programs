#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the last number : ");
    scanf("%d", &n);

    int c = sum(n);
    printf("The sum is = %d ", c);

    return 0;
}
int sum(int n)
{
    int s;
    if (n == 1)
    {
        return n;
    }
    else
    {
        s = n + sum(n-1);
    }
    return s;
}