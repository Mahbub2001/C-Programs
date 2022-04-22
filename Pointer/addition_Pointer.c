// #include <stdio.h>
// int main()
// {
//     int m, n;
//     printf("Enter the first number : ");
//     scanf("%d", &m);
//     printf("Enter the second number : ");
//     scanf("%d", &n);
//     int *ptr1 = &m;
//     int *ptr2 = &n;

//     int sum = *ptr1 + *ptr2;

//     printf("The sum is = %d", sum);

//     return 0;
// }

// C Exercises: Add two numbers using call by reference
#include <stdio.h>
int add_two_numbers(int *ptr1, int *ptr2)
{

    int sum;
    sum = *ptr1 + *ptr2;

    return sum;
}
int main()
{
    int sum, ptr1, ptr2;
    printf("Enter the first number that you want : ");
    scanf("%d", &ptr1);
    printf("Enter the second number that you want : ");
    scanf("%d", &ptr2);

    sum = add_two_numbers(&ptr1, &ptr2);
    printf("The sum is =%d", sum);

    return 0;
}