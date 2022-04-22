#include <stdio.h>
void copying(char str1[100], char str2[100]);
int main()
{
    char str1[100], str2[100];
    printf("Enter that you want : ");
    scanf("%[^\n]s", &str1); //%[^\n]s is for full string ..................
    printf("The str1 is : %s", str1);

    copying(str1, str2);
    printf("\nThe str2 is : %s", str2);

    return 0;
}
void copying(char str1[100], char str2[100])
{
    static int i = 0;
    str2[i] = str1[i];
    if (str2[i] == '\0') // It is the ascii value of null. It is use to identify whether there is null present in the string or not while performing string oeration.
    {
        return;
    }
    else
    {
        i = i + 1;
        copying(str1, str2);
    }
}

