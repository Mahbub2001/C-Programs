#include <stdio.h>
#include <stdlib.h>

int main()
{
// Open two files to be merged
FILE *ptr1 = fopen("file1.txt", "r");
FILE *ptr2 = fopen("file2.txt", "r");

// Open file to store the result
FILE *ptr3 = fopen("file3.txt", "w");
char c;

if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
{
		puts("Could not open files");
		exit(0);
}

// Copy contents of first file to file3.txt
while ((c = fgetc(ptr1)) != EOF)
	fputc(c, ptr3);

// Copy contents of second file to file3.txt
while ((c = fgetc(ptr2)) != EOF)
	fputc(c, ptr3);

printf("Merged file1.txt and file2.txt into file3.txt");

fclose(ptr1);
fclose(ptr2);
fclose(ptr3);
return 0;
}

