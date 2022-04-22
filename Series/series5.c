//  Write a program in C to find the sum of the series sinx(x) = [ x - x^3 + x^5 + ......].
#include <stdio.h>
#include <math.h>

double factorial(int);
void calc(float num, float *result);

int main()
{
    int x;
    float radian, result = 0;

    printf("Enter value of x in degrees\n");
    scanf("%d", &x);

    radian = x * (3.14159 / 180.0); // Convert Degree To Radian

    calc(radian, &result);

    printf("Sin(%d) = %f\n", x, result);

    return 0;
}

void calc(float num, float *result)
{
    int n, sign = 1;
    printf("Enter the size of the serial : ");
    scanf("%d", &n);

    for (int count = 1; count <= n; count += 2)
    {
        *result += sign * (pow(num, count) / factorial(count));
        sign *= -1;
    }
}

double factorial(int count)
{
    double sum = 1;

    for (int i = 1; i <= count; i++)
    {
        sum *= i;
    }
    return (sum);
}