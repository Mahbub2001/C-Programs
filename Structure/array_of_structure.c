#include <stdio.h>
struct student
{
    int roll_number;
    char name[20];
    float marks;
};
int main()
{
    struct student s[30];
                                                                                                                                     
    int size;
    printf("Enter the input size : ");
    scanf("%d", &size);
                                                                                                                                     
    for (int i = 0; i < size; i++)
    {
        printf("For serial %d : \n", i + 1);
        scanf("%d%s%f", &s[i].roll_number, &s[i].name, &s[i].marks);
    }
                                                                                                                                         
    for (int i = 0; i < size; i++)
    {
        printf("Now serial %d : \n", i + 1);
        printf("Roll Number = %d\n", s[i].roll_number);
        printf("Student Name = %s\n", s[i].name);
        printf("Student Mark = %f\n", s[i].marks);
    }
                                                                                                                                     
    return 0;
}