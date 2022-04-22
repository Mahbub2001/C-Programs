// Pattern 1:
// 1 
// 2 4 
// 3 6 9 
// 4 8 12 16 

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the row numbers that you want : ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int col = 1; col <= rows; col++)
        {
            printf("%d ", rows * col);
        }
        printf("\n");
    }
    return 0;
}