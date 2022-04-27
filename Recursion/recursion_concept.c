/*
     function that calls itself..
*/

// #include <stdio.h>

// int print(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     printf("%d\t", n);
//     print(n - 1);
// }

// int main()
// {
//     int n = 5;

//     // for (int i = 5; i > 0; i--)
//     // {
//     //     printf("%d\t", i);
//     // }

//     print(n);

//     return 0;
// }

// #include <stdio.h>

// int print(int n)
// {
//     if (n == 6)
//     {
//         return 0;
//     }

//     printf("%d\t", n);
//     print(n + 1);
// }

// int main()
// {
//     int n = 1;

//     // for (int i = 5; i > 0; i--)
//     // {
//     //     printf("%d\t", i);
//     // }

//     print(n);

//     return 0;
// }

// #include <stdio.h>

// void printSum(int i, int n, int sum)
// {
//     if (i == n)
//     {
//         sum += i;
//         printf("%d", sum);
//         return;
//     }

//     else
//     {
//         sum += i;
//         printSum(i + 1, n, sum);
//         printf("\n%d",i);
//     }
// }

// int main()
// {
//     int sum = 0;
//     printSum(1, 5, sum);
//     //  printf("%d",sum);

//     return 0;
// }

// #include <stdio.h>

// int printFact(int n)
// {
//     if (n == 1 || n == 0)
//     {
//        return 1;
//     }

//     else
//     {

//         int fact_nm1 = printFact(n - 1);
//         int fact_n = n*fact_nm1;
//         return fact_n;

//     }
// }

// int main()
// {
//     int n = 5;
//     int ans = printFact(n);
//     printf("%d",ans);

//     return 0;
// }

// #include <stdio.h>
// void printFibonacci(int a, int b, int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     else
//     {
//         int c = a + b;
//         printf("%d\t", c);
//         printFibonacci(b, c, n - 1);
//     }
// }

// int main()
// {
//     int a = 0;
//     int b = 1;
//     int n = 5;

//     printf("%d\t", a);
//     printf("%d\t", b);
//     printFibonacci(a, b, n - 2);

//     return 0;
// }


// stack height = n

// #include <stdio.h>
// #include <math.h>
// int print(int x, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     if (x == 0)
//     {
//         return 0;
//     }

//     else
//     {
//         int xPownm1 = print(x, n - 1);
//         int xPown = x * xPownm1;
//         return xPown;
//     }
// }

// int main()
// {
//     int x, n;
//     printf("Enter the value of x : ");
//     scanf("%d", &x);
//     printf("Enter the value of n : ");
//     scanf("%d", &n);

//     int ans = print(x, n);
//     printf("%d",ans);

//     return 0;
// }

// stack height = logn

#include <stdio.h>
#include <math.h>
int calPower(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }

    else
    {
        if (n % 2 == 0)
        {
            return calPower(x, n / 2) * calPower(x, n / 2);
        }
        else
        {
            return calPower(x, n / 2) * calPower(x, n / 2) * x;
        }
    }
}

int main()
{
    int x, n;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int ans = calPower(x, n);
    printf("%d", ans);

    return 0;
}