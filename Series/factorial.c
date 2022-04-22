#include <stdio.h>
int main()
{
    int number, fact = 1;
    printf("Enter the number that you want to factorial : ");
    scanf("%d", &number);

    for (int count = 1; count <= number; count++)
    {
        fact = fact * count;
    }
    printf("The factorial of %d is = %d", number, fact);

    return 0;
}

// Another way :

// #include <stdio.h>
// int factorial(int number)
// {

//     if (number == 1 || number == 0) // this the form part of a recursive .......
//     {
//         return 1;
//     }
//     else
//     {
//         return (number * factorial(number - 1)); // this is recursive . it si called by ownself ....
//     }
// }

// int main()
// {
//     int number;
//     printf("Enter the number that want to factorial : ");
//     scanf("%d", &number);

//     int result = factorial(number);

//     printf("The factorial of %d is = %d", number, result);

//     return 0;
// }