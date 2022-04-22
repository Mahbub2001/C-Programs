// Sum = 1/(x+1) + 2/(1+2+x) + 3/(1+2+3+x) + …… + n/(1+2+3+..+n+x)
#include <stdio.h>
double sumation(int count)
{
    int sum = 0,l=1;
    for (int i = 0; i <= count; i++)
    {
        sum = sum + l;
        return sum;
        l++;
    }

}
int main()
{
    double x;
    int n;
    printf("Enter the value of x : ");
    scanf("%lf",&x);
    printf("Enter the number that you want : ");
    scanf("%d",&n);
    
    double sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i/(x+sumation(i));
    }
    printf("The sum is : %lf",sum);

}


problem  