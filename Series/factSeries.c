
// C Exercises: Calculate the sum of the series [ 1-X^2/2!+X^4/4!- .........]
//  Input the Value of x :2
//  Input the number of terms : 5

// the sum = -0.415873
// Number of terms = 5
// value of x = 2.000000

#include <math.h>
#include <stdio.h>

// Function to get the series
double Series(double x, int n)
{
    double sum = 1, term = 1, fact, j, y = 2, m;

    // Sum of n-1 terms starting from 2nd term
    for (int i = 1; i < n; i++)
    {
        fact = 1;
        for (j = 1; j <= y; j++)
        {
            fact = fact * j;
        }
        term = term * (-1);  // for - + serial ..
        m = term * pow(x, y) / fact;
        sum = sum + m;
        y += 2;
    }
    return sum;
}

// Driver Code
int main()
{
    double x;
    printf("Enter the value of x  = ");
    scanf("%lf", &x);
    int n;
    printf("Enter the number that you want to count = ");
    scanf("%d", &n);

  //  printf("")
    printf("%.4f", Series(x, n));

    return 0;
}