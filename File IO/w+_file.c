// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *ptr = NULL;

//     char str[30];
//     ptr = fopen("abc.txt", "w+");

//     if (ptr == NULL)
//     {
//         printf("error");
//         exit(1);
//     }

//     printf("Enter the string : ");
//     fgets(str, 100, stdin);

//     fputs(str, ptr);
//     fclose(ptr);

//     return 0;
// }

//**************rewind***************
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char ch;

    char str[30];
    ptr = fopen("abc.txt", "w+");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("Enter the string : ");
    fgets(str, 100, stdin);
    fputs(str, ptr);

    rewind(ptr);

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);

    return 0;
}