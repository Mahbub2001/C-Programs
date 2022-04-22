#include<stdio.h>
int main()
{
     int a = 10;
     int *p = &a;
     int **q = &p;
     int ***r= &q;

     printf("a = %d\n",a);
     printf("a = %d\n",*p);
     printf("a = %d\n",**q);
     printf("a = %d\n",***r);
     printf("adress of q = %x  %x\n",r,&q);
     printf("adress of p = %x  %x\n",&q,p);


    return 0;
}