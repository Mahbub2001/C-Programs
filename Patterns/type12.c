// Pattern 1:
//     1
//    12
//   123
//  1234
//   123
//    12
//     1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <=numbers; rows++)
//     {
//         for (int spc = 1; spc <=numbers-rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }

//     for (int rows = numbers-1; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers-rows; spc++)
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
//    1
//   10
//  101
// 1010
//  101
//   10
//    1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers-rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d", col % 2);
//         }
//         printf("\n");
//     }
//     for (int rows = numbers-1; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <=numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d", col % 2);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Pattern 3:
//    A
//   AB
//  ABC
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

//     for (int rows = 1; rows <= numbers; rows++)
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

//     for (int rows = numbers-1; rows >= 1; rows--)
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
//    *
//   **
//  ***
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

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= rows; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int rows = numbers-1; rows >= 1 ; rows--)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
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