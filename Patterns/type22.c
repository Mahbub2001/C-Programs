//    1
//   121
//  12321
// 1234321

#include <stdio.h>
int main()
{
    int numbers;
    printf("Enter the number that you want = ");
    scanf("%d", &numbers);

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= rows; col++)
        {
            printf("%d", col);
        }
        for (int col = rows - 1; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}