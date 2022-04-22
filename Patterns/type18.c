// PAttern 1:
//     1
//    1 2
//   1 2 3
//  1 2 3 4

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the rows numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= rows; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}

// Pattern 2:
//     1
//    1 0
//   1 0 1
//  1 0 1 0
//  #include <stdio.h>
//  int main()
//  {
//      int numbers;
//      printf("Enter the rows numbers that you want : ");
//      scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", col%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 3:
//     A
//    A B
//   A B C
//  A B C D
//  #include <stdio.h>
//  int main()
//  {
//      int numbers;
//      printf("Enter the rows numbers that you want : ");
//      scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c ", col+64); // %c er por space deyar jnno ei pattern ta emon akirti dharon korese.
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 4:

//    * 
//   * * 
//  * * * 
// * * * * 

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// PAttern 1.1:
//    1 
//   2 2 
//  3 3 3 
// 4 4 4 4 

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
//             printf("%d ", rows);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 2.2:
//    1 
//   0 0
//  1 1 1
// 0 0 0 0
//  #include <stdio.h>
//  int main()
//  {
//      int numbers;
//      printf("Enter the rows numbers that you want : ");
//      scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
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

// Pattern 3.3:
//    A 
//   B B
//  C C C
// D D D D

//  #include <stdio.h>
//  int main()
//  {
//      int numbers;
//      printf("Enter the rows numbers that you want : ");
//      scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
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

