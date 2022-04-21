#include <stdio.h>
int main()
{
    int marks[100], i, n, sum = 0;
    double avg;
    printf("How many do you want to store : ");
    scanf("%d", &n);

    printf("Enter the marks : \n"); // Input data in Array.....................
    for (i = 0; i < n; i++)
    {
        printf("[%d] = ", i + 1); // i+1 for actual number of  the Array....Its not necessary ...
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < n; j++) // printf Data from the Array...............
    {
        printf("Number %d : marks is %d\n", j + 1, marks[j]); // j+1 for actual number of  the Array....Its not necessary....
        sum = sum + marks[j];
        avg = (double)sum / n;
    }
    printf("The sum is = %d", sum);
    printf("\nThe average is = %lf", avg);

    return 0;
}
