// C Exercises: Count the number of words and characters in a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr = NULL;

    int words = 0, carracters = 0;
    char ch;
    ptr = fopen("prac1", "r");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    ch = getc(ptr);
    while (!feof(ptr))
    {
        printf("%c", ch);
        if (ch == ' ' || ch == '\n')
        {
            words++;
        }
        else
        {
            carracters++;
        }
        ch = getc(ptr);
    }
    printf("The number of words are : %d",words);
    printf("The number of carracters is : %d",carracters);
    fclose(ptr);

    return 0;
}