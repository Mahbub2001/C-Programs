// ****
// *  *
// *  *
// ****


#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the row numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int col = 1; col <= numbers; col++)
        {
            if (rows == 1 || rows == numbers || col == 1 || col == numbers)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}