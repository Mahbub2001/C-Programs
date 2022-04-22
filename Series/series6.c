// Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
#include <stdio.h>
#include <math.h>
double calculate(double x);
double factorial(int l);
int main()
{

    double x;
    printf("Enter the value of x : ");
    scanf("%lf", &x);

    calculate(x);
    // printf("The sum is = %lf", result);

    return 0;
}
double calculate(double x)
{
    int seriesSize;
    printf("Enter the Series Size is : ");
    scanf("%d", &seriesSize);

    double sum = 1;
    int sign = -1;
    int l = 2;

    for (int i = 1; i <= seriesSize; i++)
    {
        sum += sign * (pow(x, l) / factorial(l));
        l += 2;
        sign *= (-1);
    }
    printf("THe sum is = %lf", sum);
}
double factorial(int l)
{
    int sum = 1;
    for (int i = 1; i <= l; i++)
    {
        sum = sum * i;
    }
    return sum;
}