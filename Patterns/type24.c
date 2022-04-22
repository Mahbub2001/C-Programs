
//     0 
//    0 1 
//   0 1 0
//  0 1 0 1
// 0 1 0 1 0

// #include <stdio.h>
// int main()
// {
//     int numbers, k;
//     printf("Enter the numbers that you want = ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         k = 0;
//         for (int spc = 1; spc <= numbers - rows; spc++)
//         {
//             printf(" ");
//         }
        
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", (k++)%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//     1 
//    1 0
//   1 0 1
//  1 0 1 0
// 1 0 1 0 1

// #include <stdio.h>
// int main()
// {
//     int numbers, k;
//     printf("Enter the numbers that you want = ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         k = 0;
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

//     1 
//    0 0
//   1 1 1
//  0 0 0 0
// 1 1 1 1 1

// #include <stdio.h>
// int main()
// {
//     int numbers, k;
//     printf("Enter the numbers that you want = ");
//     scanf("%d", &numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         k = 0;
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


//     1 
//    0 1
//   1 0 1
//  0 1 0 1
// 1 0 1 0 1

#include <stdio.h>
int main()
{
    int numbers, p=0, q=0;
    printf("Enter the rows number that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        if (rows % 2 == 0)
        {
            p = 1;
            q = 0;
        }
        else
        {
            p = 0;
            q = 1;
        }
        for (int spc = 1; spc <= numbers-rows; spc++)
        {
            printf(" ");
        }
        
        for (int col = 1; col <= rows; col++)
        {
            if (col % 2 == 0)
            {
                printf("%d ", p);
            }
            else
            {
                printf("%d ", q);
            }
        }
        printf("\n");
    }

    return 0;
}
