//punctuation marks count
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[100], count =0;
    printf("Enter the string that you want : ");
    fgets(a, 100, stdin);

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (ispunct(a[i]))
        {
            count++;
        }
    }
    printf("The number is =%d",count);

    return 0;
}