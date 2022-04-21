#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr1 = NULL, *ptr2 = NULL;
    char ch;

    ptr1 = fopen("abc.txt", "r");
    if (ptr1 == NULL)
    {
        printf("error");
        exit(1);
    }
    ptr2 = fopen("xyz.txt", "w");
    if (ptr2 == NULL)
    {
        printf("error");
        exit(1);
    }

    while ((ch = fgetc(ptr1)) != EOF)
    {
        fputc(ch, ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);

    printf("Successfully copied");

    return 0;
}