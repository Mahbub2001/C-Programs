// C Exercises: Calculate the length of the string
#include <stdio.h>

int stringLengthUsingPointer(char *str);

int main()
{
    char str[100];
    int len;

    printf("\nEnter string : ");
    fgets(str, 30, stdin);

    len = stringLengthUsingPointer(str);
    printf("\nThe length of the string is : %d", len - 1);
    return 0;
}

int stringLengthUsingPointer(char *str) /* p=&str[0] */
{
    int count = 0;
    for (int i = 0; *str != '\0'; i++)
    {
        count++;
        str++;
    }

    return count;
}

