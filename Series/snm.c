// #include <stdio.h>
// int main()
// {
//     int start, end, sum;
//     printf("Enter the start number that you want to sum : ");
//     scanf("%d", &start);
//     printf("Enter the last number that you want to sum : ");
//     scanf("%d",&end);

//     for ( int i = start; i <= end; i++)
//     {
//         sum = sum + i;
//         printf("%d ",i);
//     }
//     printf("The sum is = %d", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int start, end, sum;
//     printf("Enter the start number that you want to sum : ");
//     scanf("%d", &start);
//     printf("Enter the last number that you want to sum : ");
//     scanf("%d",&end);

//     for ( int i = start; i <= end; i+=2)
//     {
//         sum = sum + i;
//         printf("%d ",i);
//     }
//     printf("The sum is = %d", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int start, end, sum;
//     printf("Enter the start number that you want to sum : ");
//     scanf("%d", &start);
//     printf("Enter the last number that you want to sum : ");
//     scanf("%d",&end);

//     for ( int i = start; i <= end; i+=4)
//     {
//         sum = sum + i;
//         printf("%d ",i);
//     }
//     printf("The sum is = %d", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int start, end, increament, sum;
//     printf("Enter the start number that you want to sum : ");
//     scanf("%d", &start);
//     printf("Enter the last number that you want to sum : ");
//     scanf("%d", &end);
//     printf("Enter the increament that you want : ");
//     scanf("%d", &increament);

//     for (int i = start; i <= end; i += increament)
//     {
//         sum = sum + i;
//         printf("%d ", i);
//     }
//     printf("The sum is = %d", sum);

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int start, end, increament, value, sum;
    printf("Enter the start number that you want to sum : ");
    scanf("%d", &start);
    printf("Enter the last number that you want to sum : ");
    scanf("%d", &end);
    printf("Enter the increament that you want : ");
    scanf("%d", &increament);
    printf("Enter the value that you multiple in numbers : ");
    scanf("%d", &value);

    for (int i = start; i <= end; i += increament)
    {
        sum = sum + pow(i, value);
        printf("%d ", i);
    }
    printf("The sum is = %d", sum);

    return 0;
}