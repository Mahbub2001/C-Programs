// length of the file ............
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char ch;
    char str[50];

    ptr = fopen("abc.txt", "r");

    if (ptr == NULL)
    {
        printf("Cannot open the file");
        exit(1);
    }
    int pos = ftell(ptr);
    printf("%d", pos);

    fseek(ptr,5,SEEK_SET);
    printf("\n%d",ftell(ptr));

    ch = fgetc(ptr);
    printf("\n%c ",ch);
    printf("%d ",ftell(ptr));

    fscanf(ptr,"%s",str);
    printf("\n%s ",str);
    printf("%d ",ftell(ptr));

    fseek(ptr,0,SEEK_END);
    printf("\n%d",ftell(ptr));

    fclose(ptr);

    return 0;
}
