// // C program to print all permutations with duplicates allowed
// #include <stdio.h>
// #include <string.h>

// /* Function to swap values at two pointers */
// void swap(char *x, char *y)
// {
//     char temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// /* Function to print permutations of string
//    This function takes three parameters:
//    1. String
//    2. Starting index of the string
//    3. Ending index of the string. */
// void permute(char *a, int l, int r)
// {
//     int i;
//     if (l == r)
//         printf("%s\t", a);
//     else
//     {
//         for (i = l; i <= r; i++)
//         {
//             swap((a + l), (a + i));
//             permute(a, l + 1, r);
//             swap((a + l), (a + i)); // backtrack
//         }
//     }
// }

// /* Driver program to test above functions */
// int main()
// {
//     char str[100];
//     printf("Enter the word that you want : ");
//     scanf("%s", str);

//     int n = strlen(str);
//     permute(str, 0, n - 1);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int swap(char *x, char *y)
{
    char temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int permute(char *str, int l, int r)
{
    int i;
    if (l == r)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
}
int main()
{

    char str[100];
    printf("Enter the string that you want : ");
    scanf("%s", str);

    int n = strlen(str);
    permute(str, 0, n - 1);

    return 0;
}