#include <stdio.h>

int main()
{
    // int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    // int *p = &a[1], *q = &a[5];

    // printf("%d ", *(p + 3));
    // printf("%d ", *(q - 3));
    // printf("%d ", q - p);//5-1
    // printf("%d ", p < q);
    // printf("%d ", *p < *q);
    

     int a = 10,b=9;
     int *p , *q;
     p = &a;
     printf("value of a : %d", a);
     printf("\nvalue of a : %d", *p);
     printf("\nvalue of a : %x", p);
     *p = 20;
     printf("\nvalue of a : %d",a);
     printf("\nvalue of a : %x",p);

    return 0;
}