#include <stdio.h>
//#include <stdlib.h>
int main()
{
    int number, i, a[100];
    //system("cls");
    printf("Enter the number that youu want to convert : ");
    scanf("%d", &number);

    for (i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }

    printf("Printing the binary number : ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }

    return 0;
}
