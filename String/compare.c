// WITH STRING FUNCTION :
//  #include <stdio.h>
//  #include <string.h>
//  int main()
//  {
//     char a[100], b[100];

//    printf("Enter a string\n");
//    gets(a);

//    printf("Enter a string\n");
//    gets(b);

//    if (strcmp(a,b) == 0)
//       printf("The strings are equal.\n");
//    else
//       printf("The strings are not equal.\n");

//    return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
   char a[100], b[100], flag = 0;
   ;

   printf("Enter a string\n");
   gets(a);

   printf("Enter a string\n");
   gets(b);

   for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++)
   {
      if (a[i] != b[i])
      {
         flag = 1;
         break;
      }
   }
   if (flag == 1)
   {
      printf("Strings are not equal");
   }
   else
   {
      printf("Strings are equal");
   }
   
   return 0;
}