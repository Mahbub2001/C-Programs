#include <stdio.h>//Best 
int main()
{
    char str1[100];
    printf("Enter the string that you want : ");
    fgets(str1, 100, stdin);

    printf("\nThe string is : ");
    puts(str1);

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char str1[100];
//     printf("Enter the string that you want : ");
//     gets(str1);

//     printf("\nThe string is : ");
//     puts(str1);

//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     char s[20];
//     printf("Enter the string?");
//     scanf("%[^\n]s", s);
//     printf("You entered %s", s);
// }