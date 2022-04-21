//missing number.........
#include <stdio.h>

/* getMissingNo takes array and size of array as arguments*/
int getMissingNo(int a[], int n)
{
    int i, total;
    total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
    {
        total -= a[i];
    }
    return total;
}

/*program to test above function */
int main()
{
    int a[100], number;
    printf("Enter the number that you want : ");
    scanf("%d", &number);

    printf("Scanning the Array a : \n");
    for (int i = 0; i < number; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int miss = getMissingNo(a, number);
    printf("%d", miss);
    getchar();
}