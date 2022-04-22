#include <stdio.h>
int fun1(int number);
int fun2(int number);
int main()
{
    int number;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    int c = fun1(number);
    printf("%d ", c);

    return 0;
}

int fun1(int number)//fun2 k call
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * fun2(number - 1);
    }
}
int fun2(int number)//fun1 k call
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * fun1(number - 1);
    }
}