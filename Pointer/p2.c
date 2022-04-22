#include <stdio.h>
int main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    printf("%d\n", *p);

    printf("%d %d %d \n", (*p)++, *p++, *++p);//right to left ..(*p)++ man take increament korbe ...k

    q = p + 3;
    printf("%d ", *q - 3);
    printf("%d ", *--p + 5);
    printf("%d ", *p + *q);

    return 0;
}
