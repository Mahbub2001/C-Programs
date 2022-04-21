#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char str[100];

    ptr = fopen("abc.txt", "r"); // if i write don't exist it will show error;

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    fgets(str, 100, ptr);
    printf("%s", str);

    fclose(ptr);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char ch;

//     ptr = fopen("abc.txt", "r"); // if i write don't exist it will show error;

//     if (ptr == NULL)
//     {
//         printf("error");
//         exit(1);
//     }

//     while (!feof(ptr))
//     {
//         ch = fgetc(ptr);
//         printf("%c", ch);
//     }

//     fclose(ptr);

//     return 0;
// }

