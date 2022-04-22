// Patterns 1:
// * 
// * * 
// * * * 
// * * * *


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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}