// C program to find the first capital letter 
// in a string using recursion

#include <stdio.h>
#include <string.h>

char check_capital(char* str)
{
    static int i = 0;
    if (i < strlen(str)) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            return str[i];
        }
        else {
            i = i + 1;
            return check_capital(str);
        }
    }
    else
        return 0;
}

int main()
{
    char str[100];
    char cap;

    printf("Enter string: ");
    scanf("%[^\n]s", str);

    cap = check_capital(str);

    if (cap == 0)
        printf("Capital letter is not found in the string\n");
    else
        printf("First Capital letter is: %c\n", cap);

    return 0;
}