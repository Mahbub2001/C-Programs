//5^2+9^2+15^2+23^2+..................
#include <stdio.h>
#include <math.h>
int main()
{
    int numbers, sum = 0, k = 5, l = 2;
    printf("Enter the end number to count = ");
    scanf("%d", &numbers);

    for (int i = 1; i <= numbers; i++)
    {
        // printf("%d ", k);
        sum = sum + pow(k, 2);
        k = k + l * 2;
        l++;
    }
    printf("The sum is = %d", sum);
    return 0;
}