#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;

    printf("%d ", *ptr);
    free(ptr); // dangalling pointer...

    ptr = NULL;//if i don't null it it will show garbage value or will crash.
    printf("\n%d", *ptr);

    return 0;
}


//Example : 

// #include <stdio.h>
// int main()
// {
//       int *ptr = NULL;

//       {
//           int a = 5;
//           ptr = &a;
//           printf("%d ",*ptr);
//       }
//       printf("%d ",*ptr);//It is dangaling...........its output is not correct .....

//     return 0;
// }
