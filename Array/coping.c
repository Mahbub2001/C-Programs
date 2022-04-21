#include <stdio.h>
int main()
{
    int Array1[100], n, Array2[100];
    printf("Enter the array size for storing data : \n");
    scanf("%d", &n);

    printf("Enter the Elements of Array1 : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Array1[i]);
    }

    printf("The element of Array1 is : \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", Array1[j]);
    }

    // copying Data:
    for (int i = 0; i < n; i++)
    {
        Array2[i] = Array1[i];
    }

    // printing elements :
    printf("\nThe elements of Array2 is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Array2[i]);
    }

    return 0;
}