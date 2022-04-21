#include <stdio.h>
int main()
{
    int n, number[100];
    printf("Enter how much numbers do you want to show : ");
    scanf("%d", &n);

    number[0] = 0; // hence first & second number is always 0 & 1....
    number[1] = 1;

    for (int i = 2; i < n; i++)   // start from 2 ...because first & second number is fixed & we declare them above....
    {
        number[i] = number[i - 1] + number[i - 2]; // first number + second number ....
    }
    // for print the numbers : for store other first 2 numbers we use another for loop .. 
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", number[j]);
    }

    return 0;
}