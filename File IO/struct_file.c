#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct student
{
    int roll_number;
    char name[20];
    struct subject
    {
        int sub_code;
        char sub_name[20];
        int mark;
    } subject[3];
    int total;
    float percentage;
} student;

void creat();
void display();
void append();
void no_of_records();
void search();
void update();
void delete();
void sort_by_total_on_screen();
void sort_by_total_in_file();
void sort_by_name_on_screen();

int main()
{
    int choice;

    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
        printf("\n3.APPEND");
        printf("\n4.NUMBER OF RECORDS");
        printf("\n5.SEARCH");
        printf("\n6.UPDATE");
        printf("\n7.DELETE");
        printf("\n8.SORT BY TOTAL DESCENDING ON SCREEN");
        printf("\n9.SORT BY TOTAL DESCENDING IN FILE");
        printf("\n10.SORT BY NAME IN SCREEN");
        printf("\n0.EXIT");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            creat();
            break;
        case 2:
            display();
            break;
        case 3:
            append();
            break;
        case 4:
            no_of_records();
            break;
        case 5:
            search();
            break;
        case 6:
            update();
            break;
        case 7:
            delete();
            break;
        case 8:
            sort_by_total_on_screen();
            break;
        case 9:
            sort_by_total_in_file();
            break;
        case 10:
            sort_by_name_on_screen();
            break;
        }

    } while (choice != 0);

    return 0;
}

void creat()
{
    student *s;
    FILE *ptr;
    int n, i, j;
    printf("Enter how much students you want : ");
    scanf("%d", &n);

    s = (student *)calloc(n, sizeof(student));
    ptr = fopen("stu.txt", "w");

    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        s[i].percentage = 0;

        printf("Enter the roll number : ");
        scanf("%d", &s[i]);
        fflush(stdin);
        printf("Enter name : ");
        scanf("%[^\n]s", s[i].name);

        for (j = 0; j < 3; j++)
        {
            printf("Enter the marks of the subject %d: ", j + 1);
            scanf("%d", &s[i].subject[j].mark);
            s[i].total += s[i].subject[j].mark;
        }
        s[i].percentage = s[i].total / 3.0;
        fwrite(&s[i], sizeof(student), 1, ptr);
    }

    fclose(ptr);
}
void display()
{
    student s1;
    FILE *ptr = NULL;
    int j;

    ptr = fopen("stu.txt", "r");

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        printf("\n%-5d%-20s", s1.roll_number, s1.name);
        for (j = 0; j < 3; j++)
        {
            printf("%4d", s1.subject[j].mark);
        }
        printf("%5d%7.2f", s1.total, s1.percentage);
    }
}

void append()
{
    student *s;
    FILE *ptr;
    int n, i, j;
    printf("Enter how much students you want : ");
    scanf("%d", &n);

    s = (student *)calloc(n, sizeof(student));
    ptr = fopen("stu.txt", "a");

    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        s[i].percentage = 0;

        printf("Enter the roll number : ");
        scanf("%d", &s[i]);
        fflush(stdin);
        printf("Enter name : ");
        scanf("%[^\n]s", s[i].name);

        for (j = 0; j < 3; j++)
        {
            printf("Enter the marks of the subject %d: ", j + 1);
            scanf("%d", &s[i].subject[j].mark);
            s[i].total += s[i].subject[j].mark;
        }
        s[i].percentage = s[i].total / 3.0;
        fwrite(&s[i], sizeof(student), 1, ptr);
    }

    fclose(ptr);
}
void no_of_records()
{
    student s1;
    FILE *ptr = NULL;
    ptr = fopen("stu.txt", "r");
    fseek(ptr, 0, SEEK_END);
    int n = ftell(ptr) / sizeof(student);
    printf("NO OF RECORDS : %d", n);
    fclose(ptr);
}
void search()
{
    student s1;
    FILE *ptr = NULL;
    int j, roll, found = 0;

    ptr = fopen("stu.txt", "r");
    printf("Enter roll number that you want to search : ");
    scanf("%d", &roll);

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        if (s1.roll_number == roll)
        {
            found = 1;
            printf("\n%-5d%-20s", s1.roll_number, s1.name);
            for (j = 0; j < 3; j++)
            {
                printf("%4d", s1.subject[j].mark);
            }
            printf("%5d%7.2f", s1.total, s1.percentage);
        }
    }
    if (!found)
    {
        printf("\nRecord not found\n");
    }
}
void update()
{
    student s1;
    FILE *ptr = NULL, *ptr1 = NULL;
    int j, roll, found = 0;

    ptr = fopen("stu.txt", "r");
    ptr1 = fopen("temp.txt", "w");
    printf("Enter roll number that you want to update : ");
    scanf("%d", &roll);

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        if (s1.roll_number == roll)
        {
            s1.total = 0;
            s1.percentage = 0;

            found = 1;
            fflush(stdin);
            printf("Enter new name : ");
            scanf("%[^\n]s", s1.name);

            for (j = 0; j < 3; j++)
            {
                printf("Enter new marks of the subject %d: ", j + 1);
                scanf("%d", &s1.subject[j].mark);
                s1.total += s1.subject[j].mark;
            }
            s1.percentage = s1.total / 3.0;
        }
        fwrite(&s1, sizeof(student), 1, ptr1);
    }
    fclose(ptr);
    fclose(ptr1);
    if (found)
    {
        ptr1 = fopen("temp.txt", "r");
        ptr = fopen("stu.txt", "w");

        while (fread(&s1, sizeof(student), 1, ptr1))
        {
            fwrite(&s1, sizeof(student), 1, ptr);
        }

        fclose(ptr1);
        fclose(ptr);
    }
    else
    {
        printf("\nRecord not found\n");
    }
}
void delete()
{
    student s1;
    FILE *ptr = NULL, *ptr1 = NULL;
    int j, roll, found = 0;

    ptr = fopen("stu.txt", "r");
    ptr1 = fopen("temp.txt", "w");
    printf("Enter roll number that you want to delete : ");
    scanf("%d", &roll);

    while (fread(&s1, sizeof(student), 1, ptr))
    {
        if (s1.roll_number == roll)
        {
            found = 1;
        }
        else
        {
            fwrite(&s1, sizeof(student), 1, ptr1);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    if (found)
    {
        ptr1 = fopen("temp.txt", "r");
        ptr = fopen("stu.txt", "w");

        while (fread(&s1, sizeof(student), 1, ptr1))
        {
            fwrite(&s1, sizeof(student), 1, ptr);
        }

        fclose(ptr1);
        fclose(ptr);
    }
    else
    {
        printf("\nRecord not found\n");
    }
}
void sort_by_total_on_screen()
{
    student *s, s1;
    FILE *ptr = NULL;

    ptr = fopen("stu.txt", "r");
    fseek(ptr, 0, SEEK_END);
    int n = ftell(ptr) / sizeof(student);
    s = (student *)calloc(n, sizeof(student));

    rewind(ptr);

    for (int i = 0; i < n; i++)
    {
        fread(&s[i], sizeof(student), 1, ptr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].total < s[j].total)
            {
                s1 = s[i];
                s[i] = s[j];
                s[j] = s1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%-5d%-20s", s[i].roll_number, s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", s[i].subject[j].mark);
        }
        printf("%5d%7.2f", s[i].total, s[i].percentage);
    }

    fclose(ptr);
}
void sort_by_total_in_file()
{
    student *s, s1;
    FILE *ptr = NULL;

    ptr = fopen("stu.txt", "r");
    fseek(ptr, 0, SEEK_END);
    int n = ftell(ptr) / sizeof(student);
    s = (student *)calloc(n, sizeof(student));

    rewind(ptr);

    for (int i = 0; i < n; i++)
    {
        fread(&s[i], sizeof(student), 1, ptr);
    }
    fclose(ptr);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].total < s[j].total)
            {
                s1 = s[i];
                s[i] = s[j];
                s[j] = s1;
            }
        }
    }
    ptr = fopen("stu.txt", "w");

    for (int i = 0; i < n; i++)
    {
        printf("\n%-5d%-20s", s[i].roll_number, s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", s[i].subject[j].mark);
        }
        printf("%5d%7.2f", s[i].total, s[i].percentage);
        fwrite(&s[i], sizeof(student), 1, ptr);
    }

    fclose(ptr);
}
void sort_by_name_on_screen()
{
       student *s, s1;
    FILE *ptr = NULL;

    ptr = fopen("stu.txt", "r");
    fseek(ptr, 0, SEEK_END);
    int n = ftell(ptr) / sizeof(student);
    s = (student *)calloc(n, sizeof(student));

    rewind(ptr);

    for (int i = 0; i < n; i++)
    {
        fread(&s[i], sizeof(student), 1, ptr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name,s[j].name)>0)///change here
            {
                s1 = s[i];
                s[i] = s[j];
                s[j] = s1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%-5d%-20s", s[i].roll_number, s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", s[i].subject[j].mark);
        }
        printf("%5d%7.2f", s[i].total, s[i].percentage);
    }

    fclose(ptr);
}
