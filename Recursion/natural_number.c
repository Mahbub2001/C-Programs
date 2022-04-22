// Write a program in C to print first 50 natural numbers using recursion.
#include <stdio.h>
int natural_number(int number);
int main()
{
    int number;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    natural_number(number);

    return 0;
}
int natural_number(int number)
{
    if (number < 1)
    {
        return 0;
    }
    else
    {
        natural_number(number - 1);
        printf("%d ", number);
    }
}