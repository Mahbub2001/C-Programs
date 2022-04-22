// 1
// 01
// 101
// 0101
// 10101

#include <stdio.h>
int main()
{
    int numbers, p, q;
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
        for (int col = 1; col <= rows; col++)
        {
            if (col % 2 == 0)
            {
                printf("%d", p);
            }
            else
            {
                printf("%d", q);
            }
        }
        printf("\n");
    }

    return 0;
}
