#include <stdio.h>
void lower_string(char[]);

int main()
{
    char string[100];

    printf("Enter a string to convert it into lower case\n");
    fgets(string, 30, stdin);

    lower_string(string);

    printf("The updated string is = ");
    puts(string);

    return 0;
}

void lower_string(char s[])
{
    int c = 0;

    while (s[c] != '\0')
    {
        if (s[c] >= 'A' && s[c] <= 'Z')
        {
            s[c] = s[c] + 32;
        }
        c++;
    }
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char string[1000];
   
//    printf("Input a string to convert to lower case\n");
//    fgets(string,30,stdin);
   
//    printf("The string in lower case: %s\n", strlwr(string));
   
//    return  0;
// }