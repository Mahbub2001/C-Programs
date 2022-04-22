#include <stdio.h>

int display(int number)
{
    if (number < 1)
    {
        return 0;
    }
    else
    {
        printf("%d ", number);
        display(number - 1);
        printf("%d ", number);
    }
}

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    display(number);

    return 0;
}