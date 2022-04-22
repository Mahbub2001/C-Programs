#include<stdio.h>
int main ()
{
      int a = 10, b=5;
      int *p = &a;
      int *q;
      q=p;//accessing pointers ...... changing adress of q;

      printf("%d %d %d ",a,*p,*q);


    return 0;
}

// #include<stdio.h>
// int main ()
// {
//       int a = 10, b=5;
//       int *p = &a;
//       int *q = &b;
//       *q=*p;//accessing values ...... changing values of q;

//       printf("%d %d %d ",a,*p,*q);


//     return 0;
// }