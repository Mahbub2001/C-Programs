#include <stdio.h>
int digit(int number)
{
    static int count;
    if (number != 0)
    {
        count++;
        digit(number / 10);
    }
    else
    {
        return count;
    }
}
int main()
{
    long long number;
    printf("Enter the number that you want : ");
    scanf("%lld", &number);

    int count = digit(number);
    printf("The digit of the number is = %d", count);
}
