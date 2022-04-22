//         1
//       1   1
//     1   2   1
//   1   3   3   1
// 1   4   6   4   1

#include <stdio.h>

void main()
{
    int numbers, c = 1;
    printf("Input number of rows: ");
    scanf("%d", &numbers);
    for (int rows = 0; rows < numbers; rows++)
    {
        for (int spc = 1; spc <= numbers - rows; spc++)
        {
            printf("  ");
        }
        for (int col = 0; col <= rows; col++)
        {
            if (col == 0 || rows == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (rows - col + 1) / col;
            }

            printf("% 4d", c);
        }
        printf("\n");
    }
}