// Write a C programming to find the repeated character in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count = 0, length;
    printf("Enter the string : ");
    fgets(str, 100, stdin);

    length = strlen(str);

    for (int i = 0; i < length - 1; i++)
    {
        count = 1;
        if (str[i])
        {
            for (int j = i + 1; j < length - 1; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '\0';
                }
            }
            if (count > 1)
            {
                printf("%c ", str[i]);
            }
        }
    }

    return 0;
}