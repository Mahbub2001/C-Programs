#include <stdio.h>
int main()
{
    const int a = -11;
    const int *p = &a;//read only for const
    *p = 10;
    printf("%d ", a);

    return 0;
}