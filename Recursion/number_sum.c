#include <stdio.h>
int digit(int number)
{
    if (number != 0)
    {
        return (number % 10) + digit(number / 10);
    }
    else
    {
        return 0;
    }
}
int main()
{
    long long number;
    printf("Enter the number that you want : ");
    scanf("%lld", &number);

    int c = digit(number);
    printf("The sum is = %d", c);
}

//  #include<stdio.h>
//  int main()
//  {
//      int number,sum;

//      printf("Enter any number: ");
//      scanf("%d",&number);

//      for(sum = 0; number!=0; number/=10)
//      {
//          sum += (number%10);
//      }

//      printf("Sum of digits =  %d\n",sum);

//      return 0;
//  }
