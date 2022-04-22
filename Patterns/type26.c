// 4 3 2 1 
// 4 3 2 
// 4 3 
// 4 
#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the rows number : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int cols = numbers; cols >= rows; cols++)
        {
            printf("%d ", cols);
        }
        printf("\n");
    }

    return 0;
}

// 1 1 1 1 
// 2 2 2 
// 3 3 
// 4 
// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number : ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col = numbers; col >= rows; col--)
//         {
//             printf("%d ", rows);
//         }
//         printf("\n");
//     }

//     return 0;
// }