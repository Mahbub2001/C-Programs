#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100][100];
    int i, j = 0, k = 0;

    printf("Enter the string : ");
    fgets(str1, 100, stdin);

    for (int i = 0; str1[i] != '\0'; i++) 
    {
        if (str1[i] == ' ')
        {
            str2[k][j] = '\0';
            k++;
            j = 0; 
        }
        else
        {
            str2[k][j] = str1[i];
            j++;
        }
    }

    for (int i = 0; i <= k; i++)
    {
        printf("%s\n", str2[i]);
    }

    return 0;
}


      
        
           
        
        

