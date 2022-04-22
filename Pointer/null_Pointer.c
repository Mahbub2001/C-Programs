//If null :
#include <stdio.h>
int main()
{
    int a = 3;
    int *ptr;
    ptr = NULL;

    if (ptr == NULL)
    {
        printf("This is null ");
    }
    else
    {
        printf("%d ", *ptr);
    }
    return 0;
}

//Another not initilized anything or initialized by 0 :
// #include<stdio.h>
// int main ()
// {
//        int a = 3;
//        int *ptr=0;

//        printf("%d ",*ptr);
       

//     return 0;
// }
//garbage value : 
// #include<stdio.h>
// int main ()
// {
//        int a = 3;
//        int *ptr;

//        printf("%d",*ptr);


//     return 0;
// }