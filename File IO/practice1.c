#include <stdio.h>
#include <stdlib.h>

void readFile ();
void writeFile ();
void apppendFile ();
typedef struct {
  int id ;
  float cgpa ;
  char name[80] ;
} Student ;

typedef int Turza ;

int main()
{
    // writeFile() ;
    readFile() ;
    //apppendFile() ;
    return 0;
}

void readFile ()
{
    FILE *fp ;
    Student q[5] ;

    fp = fopen ("student.dat", "rb") ;
    if (fp == NULL)
    {
        exit (1) ;
    }

    fread (q, sizeof(Student), 4, fp) ;

    for (int i = 0; i < 4; i++)
    {

        printf("ID: %d\n", q[i].id);
        printf("CGPA: %f\n", q[i].cgpa) ;
        printf("Name: %s\n", q[i].name) ;
    }

    fclose(fp) ;

}
void writeFile ()
{
    FILE *fp ;

    fp = fopen ("student.dat", "wb") ;
    if (fp == NULL)
    {
        exit (1) ;
    }

    Student q ;


    Student s[5] ;


    Turza i ;
    for (i = 0; i < 2; i++)
    {
        printf("ID: ") ;
        scanf("%d", &s[i].id) ;
        printf("CGPA: ") ;
        scanf("%f", &s[i].cgpa);
        printf("Name: ") ;
        scanf("%s", s[i].name) ;

    }


    for (int i = 0; i < 2; i++)
    {
        fwrite (&s[i], sizeof(Student), 1, fp) ;
    }

    fclose(fp) ;
}

void apppendFile ()
{
    FILE *fp ;

    fp = fopen ("student.dat", "ab") ;
    if (fp == NULL)
    {
        exit (1) ;
    }

    Student q ;


    Student s[5] ;


    Turza i ;
    for (i = 0; i < 2; i++)
    {
        printf("ID: ") ;
        scanf("%d", &s[i].id) ;
        printf("CGPA: ") ;
        scanf("%f", &s[i].cgpa);
        printf("Name: ") ;
        scanf("%s", s[i].name) ;

    }


    for (int i = 0; i < 2; i++)
    {
        fwrite (&s[i], sizeof(Student), 1, fp) ;
    }

    fclose(fp) ;
}