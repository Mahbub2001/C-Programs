#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr = NULL;
    char ch;
    int count = 1;

    ptr = fopen("abc.txt", "r");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    while ((ch = fgetc(ptr)) != EOF)
    //for(int c = fgetc(ptr); c!= EOF;c = fgetc(ptr)).......
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    fclose(ptr);

    printf("Lines are : %d", count);

    return 0;
}