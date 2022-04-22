// Pattern 1:
// A
// A B
// A B C
// A B C D

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the numbers that you want : ");
//     scanf("%d", &numbers);
//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c ",col+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

 
 // Pattern 2:
 // a
 // a b
 // a b c

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c ", col + 96);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// pattern 3:
// A
// B B
// C C C
// D D D D

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the rows numbers : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int col = 1; col <= rows; col++)
        {
            printf("%c ", rows + 64);
        }
        printf("\n");
    }
    return 0;
}