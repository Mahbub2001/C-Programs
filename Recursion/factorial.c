#include <stdio.h>

int factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        number = number * factorial(number - 1);
        return number;
    }
}

int main()
{
    int number;
    printf("Enter the number that you want to factorial : ");
    scanf("%d", &number);

    int c = factorial(number);
    printf("%d ", c);

    return 0;
}