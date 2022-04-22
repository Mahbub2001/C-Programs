                                                // 1 + (1/2.000000) + (1/3.000000) + (1/4.000000) The sum is = 2.08

#include <stdio.h>
int main()
{
    double start, end, sum;
    // printf("Enter the start number that you want to sum : ");
    // scanf("%d", &start);
    printf("Enter the last number that you want to sum : ");
    scanf("%lf", &end);
    // printf("Enter the increament that you want : ");
    // scanf("%d", &increament);
    // printf("Enter the value that you multiple in numbers : ");
    // scanf("%d", &value);

    for (double i = 1; i <= end; i++)
    {

        sum = sum + (1 / i);

        if (i == 1)
        {
            printf("\n1 + ");
        }
        else if (i == end)
        {
            printf("(1/%lf) ", i);
        }
        else
        {
            printf("(1/%lf) + ", i);
        }
    }
    printf("The sum is = %.2lf", sum);

    return 0;
}

                                         // 1 + (1/2.000000^2) + (1/3.000000^2) + (1/4.000000^2) The sum is = 1.42

// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     double start, end,sum;
//     int value;
//     // printf("Enter the start number that you want to sum : ");
//     // scanf("%d", &start);
//     printf("Enter the last number that you want to sum : ");
//     scanf("%lf", &end);
//     // printf("Enter the increament that you want : ");
//     // scanf("%d", &increament);
//     printf("Enter the value that you multiple in numbers : ");
//     scanf("%d", &value);

//     for (double i = 1; i <= end; i++)
//     {

//         sum = sum + (1 / pow(i,value));

//         if (i == 1)
//         {
//             printf("\n1 + ");
//         }
//         else if (i == end)
//         {
//             printf("(1/%lf^%d) ", i,value);
//         }
//         else
//         {
//             printf("(1/%lf^%d) + ", i,value);
//         }
//     }
//     printf("The sum is = %.2lf", sum);

//     return 0;
// }

                                                                        // (1/2.000000^2) + (1/4.000000^2) 


// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     double start, end,sum;
//     int value,increament;
//     // printf("Enter the start number that you want to sum : ");
//     // scanf("%d", &start);
//     printf("Enter the last number that you want to sum : ");
//     scanf("%lf", &end);
//     printf("Enter the increament that you want : ");
//     scanf("%d", &increament);
//     printf("Enter the value that you multiple in numbers : ");
//     scanf("%d", &value);

//     for (double i = 2; i <= end; i+=increament)
//     {

//         sum = sum + (1 / pow(i,value));

//         if (i == 1)
//         {
//             printf("\n1 + ");
//         }
//         else if (i == end)
//         {
//             printf("(1/%lf^%d) ", i,value);
//         }
//         else
//         {
//             printf("(1/%lf^%d) + ", i,value);
//         }
//     }
//     printf("\nThe sum is = %.2lf", sum);

//     return 0;
// }