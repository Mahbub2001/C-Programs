// Pattern1:
//     1
//    12
//   123
//  1234
// 12345

#include <stdio.h>
int main()
{
  int number;
  printf("Enter the row number that you want : ");
  scanf("%d", &number);

  for (int rows = 1; rows <= number; rows++)
  {
      for (int spc = 1; spc <= number - rows; spc++)
      {
          printf(" ");
      }
      for (int col = 1; col <= rows; col++)
      {
          printf("%d", col);
      }
      printf("\n");
  }
  return 0;
}

// Pattern 2:
//    A
//   AB
//  ABC
// ABCD

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c", col+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 3:
//    1
//   10
//  101
// 1010

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int spc = 1; spc <= numbers - rows; spc++)
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


// Pattern 4:
//    *
//   **
//  ***
// ****

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
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }