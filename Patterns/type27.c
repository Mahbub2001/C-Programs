// - - - - * 
// - - - * * 
// - - * * * 
// - * * * * 
// * * * * *
#include<stdio.h>
int main()
{
  int numbers;
  printf("Enter the numbers of cols and rows that you want : ");
  scanf("%d",&numbers);

  for(int rows=1;rows<=numbers;rows++)
  {

    for(int j = rows; j < numbers; j++)
    {
      printf("- ");
    }

    for(int cols=1 ;cols <= rows;cols++)
    {
      printf("* ");
    }

    printf("\n");
  }


  return 0;
}



