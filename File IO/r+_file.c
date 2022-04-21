#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;

    char str[30];
    ptr = fopen("abc.txt", "r+");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }
  ///reding ................
    while (!feof(ptr))
    {
        fgets(str, 20, ptr);
        printf("%s", str);
    }

    //writing........................
    fputs("Turza", ptr);

    fclose(ptr);

    return 0;
}