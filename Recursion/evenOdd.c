#include <stdio.h>
int even_odd(int start,int end);
int main()
{
    int start, end;
    printf("Enter the start number that you want : ");
    scanf("%d", &start);
    printf("Enter the end number that you want : ");
    scanf("%d", &end);

    even_odd(start,end);

    return 0;
}
int even_odd(int start,int end)
{
    if (start > end)
    {
        return 0;
    }
    else
    {
        printf("%d  ",start);
        even_odd(start+=2,end);
    }
}