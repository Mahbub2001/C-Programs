#include<stdio.h>
int main()
{
  
      FILE *ptr = NULL;
      char string[100] = "This content was produced by turza";
    //   ptr = fopen("myfile,txt","r");

    //    fscanf(ptr,"%s",string);
    //    printf("The content of this file has : %s\n",string);

    //*********Reading a file ****************


    //***********wrting a file*****************
    ptr = fopen("myfile.txt","a");//(file_name,mode)...
    fprintf(ptr,"%s",string);
    //"r" read korar jnno....."w" write korar jnno....."a" append korar jnno
    fclose(ptr);

    return 0;
}