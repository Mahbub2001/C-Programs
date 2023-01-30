// Calculator example using C code
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define KEY "Enter the Operation you want to do:"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void all_calculator_operations();
int main()
{
    int X = 1;
    char operations;
    all_calculator_operations();
    while (X)
    {
        printf("\n");
        printf("%s : ", KEY);
        operations = getche();
        switch (operations)
        {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '?':
            modulus();
            break;
        case '!':
            factorial();
            break;
        case '^':
            power();
            break;
        case 'H':
        case 'h':
            all_calculator_operations();
            break;
        case 'Q':
        case 'q':
            exit(0);
            break;
        case 'c':
        case 'C':
            system("cls");
            all_calculator_operations();
            break;
        default:
            system("cls");
            printf("\nYou have entered unavailable option");
            printf("\nPlease Enter any one of below available ");
            all_calculator_operations();
        }
    }
}
void all_calculator_operations()
{
    printf("\nWelcome to C calculator \n\n");
    printf("Press 'Q' or 'q' to quit the program\n");
    printf("Press 'H' or 'h' to display below options\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
    printf("Enter + for Addition \n");
    printf("Enter - for Subtraction \n");
    printf("Enter * for Multiplication \n");
    printf("Enter / for Division \n");
    printf("Enter ? for Modulus\n");
    printf("Enter ^ for Power \n");
    printf("Enter ! for Factorial \n\n");
}

void addition()
{
    int n, total = 0, a = 0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d", &n);
    printf("Enter %d numbers one by one: \n", n);
    while (a < n)
    {
        scanf("%d", &number);
        total = total + number;
        a = a + 1;
    }
    printf("Sum of %d numbers = %d \n", n, total);
}

void subtraction()
{
    int x, y, z = 0;
    printf("\nEnter first number  : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    z = x - y;
    printf("\n%d - %d = %d\n", x, y, z);
}

void multiplication()
{
    int a, b, multiplication = 0;
    printf("\nEnter first number   : ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    multiplication = a * b;
    printf("\nMultiplication of entered numbers = %d\n", multiplication);
}

void division()
{
    int a, b, result = 0;
    printf("\nEnter first number  : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    result = a / b;
    printf("\nDivision of entered numbers=%d\n", result);
}

void modulus()
{
    int a, b, d = 0;
    printf("\nEnter first number   : ");
    scanf("%d", &a);
    printf("Enter second number  : ");
    scanf("%d", &b);
    d = a % b;
    printf("\nModulus of entered numbers = %d\n", d);
}

void power()
{
    double a, num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf", &a);
    printf("power : ");
    scanf("%lf", &num);
    p = pow(a, num);
    printf("\n%lf to the power %lf = %lf \n", a, num, p);
}

int factorial()
{
    int i, fact = 1, num;
    printf("\nEnter a number to find factorial : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nEnter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }
    for (i = 1; i <= num; i++)
        fact = fact * i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n", num, fact);
    return 0;
}