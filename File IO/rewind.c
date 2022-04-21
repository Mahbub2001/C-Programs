#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    FILE *ptr = NULL;
    char ch;
    ptr = fopen("abc.txt", "r+");
    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }
    fseek(ptr, 6, SEEK_SET);
    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    rewind(ptr); // for bring the cursor at the first ....

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }

    fclose(ptr);

    return 0;
}