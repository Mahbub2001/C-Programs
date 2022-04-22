// Pattern 1:
// 1234
//  123
//   12
//    1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <=numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 2:
// 0000
//  111
//   00
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
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d", rows % 2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Patterns 3:

// ABCD
//  ABC
//   AB
//    A

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c", col + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 4:
// ****
//  ***
//   **
//    *

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the row numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int spc = 1; spc <= numbers-rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= rows; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}