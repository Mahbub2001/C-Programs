#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;

    char str[50];
    ptr = fopen("abc.txt","a");//a for append....

     if (ptr == NULL)
     {
         printf("error");
         exit(1);
     }

     printf("Enter the string that you want to append  : ");
     fgets(str,30,stdin);

     fputs(str,ptr);

     fclose(ptr);

    return 0;
}

