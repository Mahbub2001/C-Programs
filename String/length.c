#include <stdio.h>
int main()
{
    char str[100], i;
    printf("Enter the string that you want : ");
    fgets(str, 100, stdin);

    printf("You entered : ");
    puts(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        i;
    }
    printf("The length of the string is : %d", i-1);

    return 0;
}

// BY STRING FUNCTION :
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     printf("Enter the string that you want : ");
//     fgets(str, 100, stdin);

//     printf("You entered : ");
//     puts(str);

//     printf("The length of the string is :  %d", strlen(str)-1);

//     return 0;
// }