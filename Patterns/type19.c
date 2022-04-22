// Pattern 1:

// * * * * 
//  * * *
//   * *
//    *

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= rows; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// PAttern 2:
// 4 4 4 4 
//  3 3 3
//   2 2
//    1

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
//             printf("%d ", rows);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 3:
// 0 0 0 0 
//  1 1 1 
//   0 0 
//    1 
//  #include <stdio.h>
//  int main()
//  {
//      int numbers;
//      printf("Enter the rows numbers that you want : ");
//      scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", rows%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 4:
// D D D D 
//  C C C 
//   B B 
//    A 

//  #include <stdio.h>
//  int main()
//  {
//      int numbers;
//      printf("Enter the rows numbers that you want : ");
//      scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c ", rows+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

