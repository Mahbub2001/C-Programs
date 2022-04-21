#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int max, len = 0;

    printf("Enter the string : ");
    gets(str1);

    len = strlen(str1);

    int temp = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str1[j] < str1[i])
            {
              temp = str1[i];
              str1[i] = str1[j];
              str1[j] = temp;
            }
        }
    }
    printf("Printing the updated string : ");
    puts(str1);

    return 0;
}
