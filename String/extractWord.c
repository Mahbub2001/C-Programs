#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],word[100];
    int pos, len,i;

    printf("Enter the string : ");
    fgets(str1,100,stdin);

    printf("Enter the position where you want to start crop : ");
    scanf("%d",&pos);

    printf("Enter the lenth that you want to crop : ");
    scanf("%d",&len);

    for (i = 0; i < len; i++)
    {
        word[i] = str1[pos + i -1];
    }
    word[i] = '\0';
 
    printf("Printing the updated string : ");
    puts(word);

    return 0;
}
