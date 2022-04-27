#include <stdio.h>
void get(int n)
{
   if (n < 1)
   {
      return;
   }
   get(n - 1);
   get(n - 2);
   printf("%d\n", n);
}

int main()
{
   get(6);
}
// there are total 25 calls meet to get function
/*

                     get(6)
                   /       \
                  get(5)    (n - 3 = 6 - 3 = 3 ) get(3) + 6 // for next function & +6 for get(3) have 6 cals
                /       \
               get(4)    (n - 3 = 5 - 3  = 2) get(2) + 4 // for next function & +4 for get(2) have 4 calls
             /       \
            get(3)    (n - 3 = 4 - 3 = 1) get(1) + 2// for next functoin & +2 for get(1) have 2 calls
          /       \
         get(2)    (n - 3 = 3 - 3 = 0) get(0) // for next function
       /       \
     get(1)     (n - 3 = 2 - 3 = -1) get(-1) //for next function
   /       \
  get(0)    (n - 3 = 1 - 3 = -2) get(-2)//for next function

*/