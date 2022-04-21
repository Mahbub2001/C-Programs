#include <stdio.h>
int main()
{
    int n, number[100], value, pos = -1;// take the pos as -1 ...because array start from 0.. should take a different value .....
    printf("Enter the number how many numbers do you want to store : \n");
    scanf("%d", &n);

    printf("Enter the numbers : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);//storing numbers
    }

    //Main codes:
    printf("Enter the value do you want to search : \n");
    scanf("%d", &value);

    for (int j = 0; j < n; j++)
    {
        if (value == number[j])  // checcking numbers 
        {
            pos = j + 1;       // if find the number position will be change. +1 becase array start from 0. for exact position we need to pluse 1
            break;
        }
    }
    if (pos == -1)
    {
        printf("Can't find the number that you want to find ....");
    }
    else
    {
        printf("Find the number & the position of the number is %d ", pos);
    }

    return 0;
}