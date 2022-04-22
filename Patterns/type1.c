// pattern 1:
//  1
//  1 2
//  1 2 3
//  1 2 3 4

// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("Enter the row number : ");
//     scanf("%d", &number);

//     for (int rows = 1; rows <= number; rows++)
//     {
//         for (int col = 1; col <= rows; col++)
//         {
//             printf("%d ", col);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// pattern 2:
//  1
//  2 2
//  3 3 3
//  4 4 4 4
#include<stdio.h>
int main ()
{
   int numbers; 
   printf("Enter the number that you want : ");
   scanf("%d",&numbers);

   for (int rows = 1; rows <= numbers; rows++)
   {
       for (int col = 1; col <= rows; col++)
       {
           printf("%d ",rows);
       }
       printf("\n");
   }
 return 0;
} 