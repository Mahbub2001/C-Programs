#include <stdio.h>//Best
int main()
{
    char str1[100],str2[100],i;
    printf("Enter the string that you want : ");
    fgets(str1, 100, stdin);

    printf("\nThe string is : ");
    puts(str1);

    for (i = 0; str1[i] != '\0' ; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("\nThe copying success and the string is : ");
    puts(str2);

    return 0;
}

// WITH STRING FUNCTION:
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100], str2[100], i;
//     printf("Enter the string that you want : ");
//     fgets(str1, 100, stdin);

//     printf("\nThe string is : ");
//     puts(str1);

//     strcpy(str2, str1);

//     printf("\nThe copying success and the string is : ");
//     puts(str2);

//     return 0;
// }