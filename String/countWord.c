#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string that you want : ");
    gets(str);

    int word = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            word++;
        }
    }
    printf("The words number is = %d", word);

    return 0;
}

