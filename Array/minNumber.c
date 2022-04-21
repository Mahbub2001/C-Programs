#include <stdio.h>
int main()
{
    int number[100], min, n;
    printf("Enter how much numbers do you want to store : ");
    scanf("%d", &n);

    printf("Enter the number that you want to store : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]); // storing data
    }
    min = number[0]; // suppose the value that located in number[0] is min value
    for (int j = 1; j < n; j++)
    {
        if (min > number[j]) // if the supposed minimum value isn't minimum
        {
            min = number[j]; // then store other value in minmum.all other numbers check by this way......
        }
    }
    printf("The minimum value is = %d", min);

    return 0;
}