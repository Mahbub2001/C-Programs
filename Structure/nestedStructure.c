#include <stdio.h>

struct complex
{
    int imag;
    float real;
};

struct number
{
    struct complex comp;
    int integer;
} num1;

int main()
{
      struct number s[30];
      struct complex s1[30];

    int size;
    printf("Enter the input size : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("For serial %d : \n", i + 1);
        scanf("%d%f%d", &s1[i].imag, &s1[i].real, &s[i].integer);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Now serial %d : \n", i + 1);
        printf("Roll Number = %d\n", s1[i].imag);
        printf("Student real = %f\n", s1[i].real);
        printf("Student integer = %d\n",s[i].integer);
    }

    return 0;
}
