#include <stdio.h>

int fun(int n)
{
    int x = 1, k;
    if (n == 1)
    {
        return x;
    }
    for (k = 1; k < n; ++k)
        x = x + fun(k) * fun(n - k);
    return x;
}

int main()
{
    int c = fun(5);
    printf("%d",c);

    return 0;
}