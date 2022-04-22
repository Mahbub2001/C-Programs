#include <stdio.h>
int check_prime(int number, int i);
int main()
{
    int number;
    printf("Enter the number that you want to check : ");
    scanf("%d", &number);

    int prime = check_prime(number, number / 2);
    if (prime == 1)
    {
        printf("It's a prime number");
    }
    else
    {
        printf("It's not a prime number");
    }

    return 0;
}
int check_prime(int number, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (number % i == 0)
        {
            return 0;
        }
        else
        {
            check_prime(number, i - 1);
        }
    }
}