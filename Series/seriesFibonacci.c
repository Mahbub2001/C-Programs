#include <stdio.h>
int main()
{
    int first = 0, second = 1, fibo, n;
    printf("Enter the numbers that you want to print : ");
    scanf("%d",&n);

    for (int count =0 ; count < n; count++)
    {
        if (count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
    }
    return 0;
}


//fibonacci start from 0 1 . it is mandatory . then the others numbers will come by first number + second number.
