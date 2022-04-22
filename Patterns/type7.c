// Pattern 1:
// * * * * 
// * * * 
// * * 
// *

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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

