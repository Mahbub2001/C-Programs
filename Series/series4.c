// 1-2+3-4+5-6+7........
//(1+3+5+6+......)-(2+4+6+8+.....)

#include <stdio.h>
int main()
{
    int start, end, even = 0, odd = 0;
    printf("Enter the start number : ");
    scanf("%d", &start);
    printf("Enter the end number : ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
    }
    printf("The substruction is = %d - %d = %d", odd, even, odd - even);

    return 0;
}