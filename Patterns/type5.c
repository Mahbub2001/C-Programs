// Pattern 1:
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the rows numbers : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int col = 1; col <= rows; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}


// Pattern 2:
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1

// #include <stdio.h>
// int main()
// {
//     int numbers;
//     printf("Enter the rows number :");
//     scanf("%d", &numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ",rows);
//         }
//         printf("\n");
//     }
//     return 0;
// }