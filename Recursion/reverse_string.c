// #include <stdio.h>
// #include <string.h>

// void reverse(char str1[100], int index, int size);

// int main()
// {
//     char str1[100];
//     int size;
//     printf("Enter that you want : ");
//     scanf("%s", &str1);

//     size = strlen(str1);

//     reverse(str1, 0, size - 1);
//     printf("The new is = %s", str1);

//     return 0;
// }
// void reverse(char str1[100], int index, int size)
// {
//     int temp;

//     temp = str1[index];
//     str1[index] = str1[size - index];
//     str1[size - index] = temp;

//     if (index == size / 2)
//     {
//         return;
//     }
//     else
//     {
//         reverse(str1, index + 1, size);
//     }
// }

#include <stdio.h>
void reverseSentence();
int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}
