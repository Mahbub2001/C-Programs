#include <stdio.h>
int number_deletion(int A[100], int size);
int at_the_start_deletion(int A[100], int size);
int at_the_end_deletion(int A[100], int size);
int main()
{
    int A[100], size;
    printf("Enter the element of Array A : ");
    scanf("%d", &size);

    printf("Input the elements those you want : \n");
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Printing the all elements of Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    int UserChoice;
    printf("\nEnter '1' for specific delete\n"
             "Enter '2' for delete number at the start\n"
             "Enter '3' for delete number at the end ...\n");
    scanf("%d", &UserChoice);

    switch (UserChoice)
    {
    case 1:
        number_deletion(A, size);
        break;
    case 2:
        at_the_start_deletion(A, size);
        break;
    case 3:
        at_the_end_deletion(A, size);
        break;
    default:
        printf("You entered wrong number ");
        break;
    }

    return 0;
}

int number_deletion(int A[100], int size)
{

    int pos, item;
    printf("\nWhat position do want you want to delete : ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size)
    {
        printf("Invalide Position");
    }
    else
    {
        item = A[pos - 1]; // for printing the deletion data....
        for (int i = pos - 1; i < size - 1; i++)
        {
            A[i] = A[i + 1];
        }
        size--;
    }

    printf("The deletion data is : %d", item);

    printf("\nThe new Array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

int at_the_start_deletion(int A[100], int size)
{
    int item;
    item = A[0];
    printf("\nThe deletion element is : %d", item);

    for (int i = 0; i < size; i++)
    {
        A[i] = A[i + 1];
    }
    size--;

    printf("\nThe Updated Array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

int at_the_end_deletion(int A[100], int size)
{
    int item;
    item = A[size - 1];
    printf("\nThe deletion element is : %d", item);

    size--; // for deleting
  
    printf("\nPrinting Update Element : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}