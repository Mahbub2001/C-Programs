#include <stdio.h>
#include <string.h>
struct fun
{
    char name[50];
    char address[50];
    int age;
    int number;

} person1, person2;

int main()
{
    printf("Enter the person1 name : ");
    fgets(person1.name, 50, stdin);

    printf("Enter the person1 address : ");
    fgets(person1.address, 100, stdin);

    printf("Enter the age of person1 : ");
    scanf("%d", &person1.age);

    printf("Enter the person1 number : ");
    scanf("%d", &person1.number);

    // printf("Enter the person2 name : ");
    // fgets(person2.name, 50, stdin);

    // printf("Enter the person2 address : ");
    // fgets(person2.address, 100, stdin);

    // printf("Enter the age of person2 : ");
    // scanf("%d", &person2.age);

    // printf("Enter the person2 number : ");
    // scanf("%d", &person2.number);

    printf("\n\nThe person1 name : ");
    printf("%s", person1.name);
    printf("The age of person1 : %d", person1.age);
    printf("\nThe person1 number : %d", person1.number);
    printf("\nThe person1 address : ");
    printf("%s", person1.address);

    // printf("\n\nThe person2 name : ");
    // printf("%s", person2.name);
    // printf("The age of person2 : %d", person2.age);
    // printf("\nThe person2 number : %d", person2.number);
    // printf("\nThe person2 address : ");
    // printf("%s", person2.address);

    return 0;
}