#include <stdio.h>

struct student
{
    int roll_number;
    char name[20];
    float marks;
};
struct student s;

int main()
{

    struct student *ptr = &s;

    scanf("%d\n",&ptr -> roll_number);
    scanf("%s\n",&ptr -> name);
    scanf("%f\n",&ptr -> marks);
 
    printf("%d\n",ptr -> roll_number);
    printf("%s\n",ptr -> name);
    printf("%f\n",ptr -> marks);

    return 0;
}