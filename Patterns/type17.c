// Pattern 1:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (int rows = numbers-1; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 2:

//    A
//   ABC
//  ABCDE
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

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("%c",col+64);
//         }
//         printf("\n");
//     }

//     for (int rows = numbers-1; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("%c",col+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 3:

//    1
//   101
//  10101
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

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("%d",col%2);
//         }
//         printf("\n");
//     }

//     for (int rows = numbers-1; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= 2 * rows - 1; col++)
//         {
//             printf("%d",col%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 1:
//    *
//   ***
//  *****
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
    for (int rows = 2; rows <= numbers; rows++)
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
