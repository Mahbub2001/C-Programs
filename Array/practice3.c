// second largest and second smallest element
#include <stdio.h>
int main()
{
    int a[50], size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    printf("Enter the elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The 2nd largest element is : %d", a[1]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe 2nd smallest element is : %d", a[1]);

    return 0;
}
