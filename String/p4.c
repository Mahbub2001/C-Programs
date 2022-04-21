#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[100], spc_carraccter;
    printf("Enter the string that you want : ");
    fgets(a, 100, stdin);

    printf("Enter the carracter that you want to add in the space : ");
    scanf("%c", &spc_carraccter);

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            a[i] = spc_carraccter;
        }
    }
    puts(a);

    return 0;
}