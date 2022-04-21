// Write a program in C to Concatenate Two Strings Manually.
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    int  i, j, len1, len2, k;

    printf("\n\nConcatenate Two Strings Manually :\n");
    printf("-------------------------------------\n");

    printf("Input the first string : ");
    fgets(str1, sizeof str1, stdin);

    printf("Input the second string : ");
    fgets(str2, sizeof str2, stdin);
  
    len1 = strlen(str1);
    len2 = strlen(str2);
  
    for (i = 0; i < len1 - 1; ++i)
        ;          /* value i contains reaches the end of string str1. */
    str1[i] = ' '; /* add a space with string str1. */
    i++;           /* value i increase by 1 for the blank space */

    for (j = 0; j < len2 - 1; ++j, ++i)
    {
        str1[i] = str2[j];
    }
    k = strlen(str1);

    printf("After concatenation the string is : \n ");
    for (i = 0; i < k; ++i)
    {
        printf("%c", str1[i]);
    }
    printf("\n\n");
}

