// #include <stdio.h>
// int main()
// {
//     int numbers;
//     double sum = 0;
//     printf("Enter the count number that you want to sum =");
//     scanf("%d", &numbers);

//     for (double i = 1; i <= numbers; i++)
//     {
//         sum = sum + 1/i;
//     }
//     printf("The sum is = %lf ", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int numbers, sum = 0 , k = 9;
//     printf("Enter the end number to count = ");
//     scanf("%d", &numbers);

//     for (int i = 1; i <= numbers; i++)
//     {
//         sum = sum + k;
//         k = k * 10 + 9;
//     }
//     printf("The sum is = %d",sum);
//     return 0;
// }

// Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]

// #include <math.h>
// #include <stdio.h>

// // Function to get the series
// double Series(double x, int n)
// {
//     double sum = 1, fact, j, y = 1, m;

//     // Sum of n-1 terms starting from 2nd term
//     for (int i = 1; i < n; i++)
//     {
//         fact = 1;
//         for (j = 1; j <= y; j++)
//         {
//             fact = fact * j;
//         }
//         m =  pow(x, y) / fact;
//         sum = sum + m;
//         y ++;
//     }
//     return sum;
// }

// // Driver Code
// int main()
// {
//     double x;
//     printf("Enter the value of x  = ");
//     scanf("%lf", &x);
//     int n;
//     printf("Enter the number that you want to count = ");
//     scanf("%d", &n);

//   //  printf("")
//     printf("%.4f", Series(x, n));

//     return 0;
// }

// Write a program in C to find the sum of the series [ x - x^3 + x^5 - ......]
#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0, j, y = 1, m, terms = -1, x;
    int n;
    printf("Enter the value of x  = ");
    scanf("%lf", &x);

    printf("Enter the number that you want to count = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        terms = terms * (-1);
        m = terms*pow(x, y);
        printf("%lf \n",m);
        sum = sum + m;
        y += 2;
    }
    
    printf("\n%.4lf", sum);

    return 0;
}