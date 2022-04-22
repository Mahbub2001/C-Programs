#include <stdio.h>
int factorial(int number, int *fact);
int main()
{
    int number, fact;
    printf("Enter the numbder that you want : ");
    scanf("%d", &number);

    factorial(number, &fact);
    printf("Factorial of the %d is = %d", number, fact);

    return 0;
}
int factorial(int number, int *fact)
{
    *fact = 1;
    for (int i = 1; i <= number; i++)
    {
        *fact = *fact * i;
    }
}