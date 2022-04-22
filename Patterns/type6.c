// Pattern 1:
// 1 0 1 0
// 1 0 1
// 1 0
// 1

// #include<stdio.h>
// int main ()
// {
//     int numbers ;
//     printf("Enter the rows numbers : ");
//     scanf("%d",&numbers);

//     for (int rows = numbers; rows >= 1; rows--)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ",col%2);
//         }
//         printf("\n");
//     }
//   return 0;
// }


// Pattern 2:
// 0000
// 111
// 00
// 1

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the rows numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = numbers; rows >= 1; rows--)
    {
        for (int col = 1; col <= rows; col++)
        {
            printf("%d", rows % 2);
        }
        printf("\n");
    }
    return 0;
}
