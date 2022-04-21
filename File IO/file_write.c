#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *ptr = NULL;

    char str[100];
    ptr = fopen("abc.txt", "w");

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    printf("Enter the string : ");
    fgets(str, 100, stdin);

    fputs(str, ptr); // standard...............

    fclose(ptr);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;

//     char str[100];
//     int a = 10;
//     char ch = 's';
//     ptr = fopen("abc.txt", "w");

//     if (ptr == NULL)
//     {
//         printf("error");
//         exit(1);
//     }

//     printf("Enter the string : ");
//     fgets(str, 100, stdin);

//     fprintf(ptr, "%d %s %c", a, str, ch);//mixed type of data type

//     fclose(ptr);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;

//     char str[100];
//     int a = 10;
//     char ch = 's';
//     ptr = fopen("abc.txt", "w");

//     if (ptr == NULL)
//     {
//         printf("error");
//         exit(1);
//     }

//     printf("Enter the string : ");
//     fgets(str, 100, stdin);

//     for (int i = 0; i != strlen(str); i++)
//     {
//         fputc(str[i], ptr); // not standard.........
//     }

//     fclose(ptr);

//     return 0;
// }