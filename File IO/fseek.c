// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     FILE *ptr = NULL;
//     char ch;

//     ptr = fopen("abc.txt", "r"); // a for append....

//     if (ptr == NULL)
//     {
//         printf("error");
//         exit(1);
//     }

//     int pos;
//     printf("Enter the position that you want to skip: ");
//     scanf("%d", &pos);
//     // Printing............

//     fseek(ptr, pos, SEEK_SET);
//     ch = fgetc(ptr);
//     printf("%c", ch);

//     fseek(ptr, -3, SEEK_CUR);//backward from current position.
//     ch = fgetc(ptr);
//     printf("\n%c", ch);

//     fseek(ptr, -3, SEEK_END);
//     ch = fgetc(ptr);
//     printf("\n%c", ch);

//     fclose(ptr);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    char ch;

    ptr = fopen("abc.txt", "r+"); // a for append....

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    int pos;
    printf("Enter the position that you want to skip: ");
    scanf("%d", &pos);

    fseek(ptr, pos, SEEK_SET);
    fputs("hh", ptr);////update dataa.....

    fclose(ptr);

    return 0;
}
