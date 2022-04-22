#include <stdio.h>
#include <math.h>
int seriesSum1(int a);
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    int c = seriesSum1(a);
    printf("The sum is = %d ", c);

    return 0;
}
int seriesSum1(int a)
{
    int result;
    int sign = 1;
    for (int i = 0; (a - i) >= 1; i++)
    {
        result += sign * pow((a - i), 2);
        sign *= -1;
    }
    return result;
}