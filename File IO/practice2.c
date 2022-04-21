#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int words = 1, carracters = 1;
    char str[30];
    int i;

    FILE *ptr = NULL;
    ptr = fopen("prac1", "w");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("Enter the string that you want : ");
    fgets(str, 30, stdin);

    fputs(str, ptr);
    fclose(ptr);

    char ch;
    ptr = fopen("prac1", "r");

    //ch = getc(ptr);

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    while (!feof(ptr))
    {
        printf("%c", ch);
        ch = getc(ptr);
    }
    fclose(ptr);

    return 0;
}