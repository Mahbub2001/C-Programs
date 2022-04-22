/*Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number.
For example 6 is perfect number since divisor of 6 are 1, 2 and 3.  Sum of its divisor is 1 + 2+ 3 = 6*/

// #include <stdio.h>
// int main()
// {

//     int number, sum = 0;
//     printf("Enter the number that want to test : ");
//     scanf("%d", &number);

//     for (int i = 1; i < number; i++)
//     {
//         if (number % i == 0)
//         {
//             sum = sum + i;
//             printf("%d, ",i);
//         }
//     }
//     if (sum == number)
//     {
//         printf("It is a perfect number");
//     }
//     else
//     {
//         printf("It's not a perfect number");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int start, end, sum, i;
    printf("Enter the start number : ");
    scanf("%d", &start);
    printf("Enter the end number : ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}