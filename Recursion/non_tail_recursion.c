// Example 1 :
// #include <stdio.h>
// void fun(int number)
// {
//     if (number == 0)
//     {
//         return;
//     }
//     else
//     {
//         fun(number - 1);
//         printf("%d ", number);
//     }
// }
// int main()
// {
//     int number;
//     printf("Enter the number that you want : ");
//     scanf("%d", &number);
//     fun(number);

//     return 0;
// }
// Example 2:

#include <stdio.h>
int fun(int number)
{
    if (number == 1)
    {
        return 0;
    }
    else
    {
        return 1 + fun(number / 2);
    }
}
int main()
{
    int number;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    printf("%d ", fun(number));

    return 0;
}
