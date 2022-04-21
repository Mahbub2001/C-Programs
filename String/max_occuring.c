#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], frequency[256] = {0};
    int max, len = 0;

    printf("Enter the string : ");
    gets(str1);

    len = strlen(str1);

    for (int i = 0; i < len; i++)
    {

        frequency[str1[i]]++;
    }

    for (int i = 0; i < 255; i++)
    {
        if (frequency[i] > frequency[max])
        {
            max = i;
        }
    }

    printf("\nThe maximum occured number is '%c' and the number of occur is : %d", max, frequency[max]);

    return 0;
}
