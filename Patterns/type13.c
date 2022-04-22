// Pattern 1:
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// #include <stdio.h>
// int main()
// {

//     int numbers;
//     printf("Enter the number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= numbers; col++)
//         {
//             printf("%d ", col);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Pattern 2:

// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

// #include <stdio.h>
// int main()
// {

//     int numbers;
//     printf("Enter the number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= numbers; col++)
//         {
//             printf("%d ", rows);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Pattern 3:
// 1 0 1 0
// 1 0 1 0
// 1 0 1 0
// 1 0 1 0

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= numbers; col++)
//         {
//             printf("%d ", col%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 4:

// 1 1 1 1
// 0 0 0 0
// 1 1 1 1
// 0 0 0 0

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= numbers; col++)
//         {
//             printf("%d ", rows%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Pattern 5
// A B C D 
// A B C D
// A B C D
// A B C D

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the row numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= numbers; col++)
//         {
//             printf("%c ", col + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Pattern 6
// A A A A 
// B B B B 
// C C C C 
// D D D D 

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the row numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int col = 1; col <= numbers; col++)
        {
            printf("%c ", rows + 64);
        }
        printf("\n");
    }
    return 0;
}