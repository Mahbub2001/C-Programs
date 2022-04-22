#include <stdio.h>
void rocket();
void male();
void famale();

void traingle();
void rectangle();
void invertedV();

int main()
{

    rocket();
    // void male();
    // void famale();

    return 0;
}
void rocket()
{
    traingle();
    rectangle();
    invertedV();
}
// void male()
// {
// }
// void famale()
// {
// }

void invertedV()
{
    int row_size=4, out, in;

    int print_control_x = row_size;
    int print_control_y = row_size;
    for (out = 1; out <= row_size; out++)
    {
        for (in = 1; in <= row_size * 2; in++)
        {
            if (in == print_control_x || in == print_control_y)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        print_control_x--;
        print_control_y++;
        printf("\n");
    }
}

void rectangle()
{

    int numbers=5;

    for (int rows = 1; rows <= numbers; rows++)
    {
        for (int col = 1; col <= numbers; col++)
        {
            if (rows == 1 || rows == numbers || col == 1 || col == numbers)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

void traingle()
{
    int n=4;

    // loop for line number of lines
    for (int i = 1; i <= n; i++)
    {
        // loop to print leading spaces in each line
        for (int space = 0; space <= n - i; space++)
        {
            printf("   ");
        }

        // loop to print *
        for (int j = 1; j <= i * 2 - 1; j++)
        {

            if (j == 1 || (j == i * 2 - 1) || i == n)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }
}
