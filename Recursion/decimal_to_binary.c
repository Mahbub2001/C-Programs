#include <stdio.h>
void conversion(int number);
int main()
{
    int number;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    conversion(number);

    return 0;
}
void conversion(int number)
{
    int r;

    if (number == 0)
    {
        return;
    }
    else
    {
        r = number % 2;
        conversion(number / 2);
        printf("%d  ", r); // function er niche dile reverse hye jabe..ar upre dile thik pase hye jabe..........
    }
}

// #include <stdio.h>
// void fun(int n)
// {
//     if (n <= 0)
//     {
//         return;
//     }

//     printf("% d ", --n);
//     // fun(n);
//     fun(--n);
//     printf("\n\n");
//     printf("% d ", n);
// }

// int main()
// {
//     int number;
//     printf("Enter the number that you want : ");
//     scanf("%d",&number);

//     fun(number);

//     return 0;
// }