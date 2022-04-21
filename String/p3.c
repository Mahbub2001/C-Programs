// // Write A C Program To Find The Largest Word And Smallest Word In A Given String
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char str1[100], str2[100][100];
//     int i, j = 0, k = 0, max, min, max_word = 0, min_word = 0;

//     printf("Enter the string : ");
//     fgets(str1, 100, stdin);

//     for (int i = 0; str1[i] != '\0'; i++) // spliting the string .............................
//     {
//         if (str1[i] == ' ')
//         {
//             str2[k][j] = '\0';
//             k++;
//             j = 0; // j 0 hbe word sompurno hle
//         }
//         else
//         {
//             str2[k][j] = str1[i];
//             j++;
//         }
//     }
//     str2[k][j] = '\0';

//     max = strlen(str2[0]);
//     min = strlen(str2[0]);

//     for (int i = 0; i <= k; i++)
//     {

//         if (max < strlen(str2[i]))
//         {
//             max_word = i;
//         }
//         if (min > strlen(str2[i]))
//         {
//             min_word = i;
//         }
//     }

//     printf("The largest word is = %s\n", str2[max_word]);
//     printf("The smallest word is = %s\n", str2[min_word]);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100][100];
    int i, j=0, k=0, min, max, max_word = 0, min_word = 0;

    printf("Enter the string that you want : ");
    fgets(str1, 100, stdin);

    for (i = 0; str1[i] != '\0'; i++)
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
    str2[k][j] = '\0';

    max = strlen(str2[0]);
    min = strlen(str2[0]);

    for (i = 0; i <= k; i++)
    {
        if (max < strlen(str2[i]))
        {
            max_word = i;
        }
        else if (min > strlen(str2[i]))
        {
            min_word = i;
        }
    }

    printf("The largest word is = %s\n", str2[max_word]);
    printf("The smallest word is = %s\n", str2[min_word]);

    return 0;
}