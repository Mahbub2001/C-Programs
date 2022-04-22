// Pattern 2:
// 1 
// 1 0
// 1 0 1
// 1 0 1 0

// #include<stdio.h>
// int main ()
// {
//     int numbers;
//     printf("Ennter the rows number : ");
//     scanf("%d",&numbers);

//     for (int rows = 1; rows <= numbers; rows++)
//     {
//         for (int col =1; col <= rows; col++)
//         {
//            printf("%d ",col%2);
//         }
//         printf("\n");
//     }
//    return 0;
// }



// pattern 2:
// 1 
// 0 0 
// 1 1 1 
// 0 0 0 0

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
//             printf("%d ", rows%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main ()
{
    int numbers;
    printf("Ennter the rows number : ");
    scanf("%d",&numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int col =1; col <= rows; col++)
        {
           printf("%d ",col%2);
        }
        printf("\n");
    }
   return 0;
}