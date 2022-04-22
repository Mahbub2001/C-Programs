// Pattern 1:
//    *
//   ***
//  *****
// *******

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
        for (int col = 1; col <= 2 * rows - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Pattern 2:
//    1
//   123
//  12345
// 1234567

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
//         for (int col = 1; col <= 2*rows-1; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 3:
//    A
//   ABC
//  ABCDE
// ABCDEFG

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
//         for (int col = 1; col <= 2*rows-1; col++)
//         {
//             printf("%c", col+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 4:
//    1
//   101
//  10101
// 1010101

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
//         for (int col = 1; col <= 2*rows-1; col++)
//         {
//             printf("%d", col%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }