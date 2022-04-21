#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    int i, j;

    printf("Please Enter the First String :  ");
    fgets(str1,30,stdin);

    int len1 = strlen(str1);

    char ch;
    for (int i = 0; i < len1 / 2; i++)
    {
        ch = str1[i];
        str1[i] = str1[len1 - 1 - i];
        str1[len1 - 1 - i] = ch;
    }
    printf("The updated string is : ");
    puts(str1);

    return 0;
}