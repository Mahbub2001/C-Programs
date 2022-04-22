//  C program to find GCD (HCF) of two numbers using recursion

#include <stdio.h>
int gcd(int a, int b);

int main()
{
    int num1, num2, hcf;
    
    /* Input two numbers from user */
    printf("Enter any two numbers to find GCD: ");
    scanf("%d%d", &num1, &num2);
    
    hcf = gcd(num1, num2);
    
    printf("\nGCD of %d and %d = %d", num1, num2, hcf);
  
    printf("\nLCM of %d and %d = %d", num1, num2, (num1*num2)/hcf);
   
    return 0;
}
//Recursive approach of euclidean algorithm to find GCD of two numbers
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}

