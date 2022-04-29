// Write a program that prints ALL indexes
// in which the largest value of array is present.
#include <stdio.h>
int main()
{
    int number[100], n, max;
    printf("How many number do you want to use : ");
    scanf("%d", &n);

    printf("Enter the numbers : \n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &number[i]); // storing data
    }
    max = number[0]; // suppose the value that located in number[0] is maximum  value
    for (int j = 1; j < n; j++)
    {
        if (max < number[j]) // if the supposed maximum value isn't maximum
        {
            max = number[j]; // then store other value in maximum; all other numbers check by this way......
        }
    }
    printf("\nThe maximum value is = %d\n", max);

    printf("\nAll the index of the value : ");
    for (int i = 0; i < n; i++)
    {
        if (number[i] == max)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}