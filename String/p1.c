// C Programming: Find the Frequency of Characters
#include <stdio.h>
int main()
{
    char str[100], choice;
    printf("Enter the string that you want : ");
    fgets(str, 30, stdin);

    printf("Enter the carracte that you want check : ");
    scanf("%c", &choice);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (choice == str[i])
        {
            count++;
        }
    }

    printf("\nThe number of occurs is = %d", count);

    return 0;
}