// Pattern 1;
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", col);
//         }
//         printf("\n");
//     }
//     for (int rows = numbers-1; rows >= 1; rows--)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", col);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 2:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 3 3 3
// 2 2
// 1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", rows);
//         }
//         printf("\n");
//     }

//     for (int rows = numbers-1; rows >= 1; rows--)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", rows);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 3:

// A
// A B
// A B C
// A B C D
// A B C
// A B
// A

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c ", col+64);
//         }
//         printf("\n");
//     }

//     for (int rows = numbers - 1; rows >= 1; rows--)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c ", col+64);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// Pattern 4:
// * 
// * * 
// * * * 
// * * * *
// * * *
// * *
// *

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the row numbers : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int col = 1; col <= rows; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int rows = numbers - 1; rows >= 1; rows--)
    {
        for (int col = 1; col <= rows; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}