// Pattern 1:
// A B C D
// A B C
// A B
// A

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter rows numbers that you want : ");
//     scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%c ", col +64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Pattern 2:
// D D D D
// C C C
// B B
// A

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the rows number that you want : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int col = 1; col <= rows; col++)
        {
            printf("%c ", rows + 64);
        }
        printf("\n");
    }
    return 0;
}

