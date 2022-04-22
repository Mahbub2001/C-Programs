// Pattern 1:
// 1234567
//  12345
//   123
//    1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2*rows -1 ; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 2:

// 1010101
//  10101
//   101
//    1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("%d", col % 2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 3:
// ABCDEFG
//  ABCDE
//   ABC
//    A

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("%c", col + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 4:
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the row numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * rows - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}