                                                            // 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8 X 9 X 10

// #include <stdio.h>
// int main()
// {
//     int start, end, multiplication=1;

//     printf("Enter the start number that you want : ");
//     scanf("%d", &start);
//     printf("Enter the end number that you want : ");
//     scanf("%d", &end);

//     for (int i = start; i <= end; i++)
//     {
//         multiplication = multiplication * i;
//         if(i==end){
//             printf("%d",end);
//         }
//         else if(i==start){
//             printf("%d X ",start);
//         }
//         else{
//             printf("%d X ",i);
//         }
//     }
//     printf("\nThe multiplication of the series is = %d", multiplication);

//     return 0;
// }

                                                // 1^2 X 2^2 X 3^2 X 4^2 X 5^2 X 6^2 X 7^2 X 8^2 X 9^2 X 10^2

#include <stdio.h>
#include <math.h>
int main()
{
    int start, end, value;
    int long long multiplication = 1;
    printf("Enter the start number that you want : ");
    scanf("%d", &start);
    printf("Enter the end number that you want : ");
    scanf("%d", &end);
    printf("Enter the value that you want to multiple all numbers : ");
    scanf("%d", &value);

    for (int i = start; i <= end; i++)
    {
        multiplication = multiplication * (pow(i, value));
        if (i == end)
        {
            printf("%d^%d", end, value);
        }
        else if (i == start)
        {
            printf("%d^%d X ", start, value);
        }
        else
        {
            printf("%d^%d X ", i, value);
        }
    }
    printf("\nThe multiplication of the series is = %lld", multiplication);

    return 0;
}

                                                // Another rule// 1^2 X 2^2 X 3^2 X 4^2 X 5^2 X 6^2 X 7^2 X 8^2 X 9^2 X 10^2
// #include <stdio.h>
// int main()
// {
//     int start, end;

//     int long long  multiplication=1;

//     printf("Enter the start number that you want : ");
//     scanf("%d", &start);
//     printf("Enter the end number that you want : ");
//     scanf("%d", &end);

//     for (int i = start; i <= end; i++)
//     {
//         multiplication = multiplication * (i*i);
//         if(i==end){
//             printf("%d^2",end);
//         }
//         else if(i==start){
//             printf("%d^2 X ",start);
//         }
//         else{
//             printf("%d^2 X ",i);
//         }
//     }
//     printf("\nThe multiplication of the series is = %lld", multiplication);

//     return 0;
// }
