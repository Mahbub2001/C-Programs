#include <stdio.h>

void count(int n)
{
    static int d = 1;//2nd call theke skip hbe ..cz eti static int
    printf("%d ", n);
    printf("%d ", d);
    d++;
    if (n > 1)
        count(n - 1);
    printf("%d ", d);
}

int main()
{
     count(3);

    return 0;
}
//static houyar karone seser dike sb guloi 4 hbe
