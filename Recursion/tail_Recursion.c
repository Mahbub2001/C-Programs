#include <stdio.h>
void fun(int number)
{
    if (number == 0)
    {
        return;
    }
    else
    {
        printf("%d  ", number);
        return fun(number / 2);
    }
     
}
int main()
{
    int number;
    printf("Enter the number that you want : ");
    scanf("%d", &number);
    fun(number);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int number = 10;
//     for (int count = number; number >= 1; count--)
//     {
//         printf("%d ",number);
//         number = number/2;
//     }

//     return 0;
// }