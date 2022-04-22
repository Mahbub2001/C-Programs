#include<stdio.h>

int sum(int number)
{
    int s;

    if (number == 1)
    {
        return number;
    }
    else
    {
        s = number+sum(number - 1);
    }
    return s;
    
}

int main()
{
   int number ;
   printf("Enter the number : ");
   scanf("%d",&number);

    int a = sum(number);
    printf("%d",a);

    return 0;
}