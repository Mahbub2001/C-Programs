#include <stdio.h>

#define N 100

int main()
{
    int a[N], arr1[N], arr2[N], i, pos, k1 = 0, k2 = 0, size;

    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    printf("Enter Array numbers : ");
    for (i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &a[i]);
    }
    char ch = 'y';

    do
    {
        printf("Enter position to split the array in to Two\n");
        scanf("%d", &pos);

        for (i = 0; i < size; i++)
        {
            if (i < pos)
            {
                arr1[k1++] = a[i];
                // k1++;
            }
            else
            {
                arr2[k2++] = a[i];
                // k2++;
            }
        }

        printf("\nElements of First Array -> arr1[%d]\n", k1);
        for (i = 0; i < k1; i++)
            printf("%d\n", arr1[i]);

        printf("\nElements of Second Array -> arr2[%d]\n", k2);
        for (i = 0; i < k2; i++)
            printf("%d\n", arr2[i]);

        printf("\n");

        printf("\n\nCalculate one more time ? ('y' for Yes, 'n' for no ) : ");
        scanf(" %c", &ch); // notice the preceding white space before %c
    } while (ch == 'y');   // keep asking for P, R and T til the input is 'y'

    return 0;
}
