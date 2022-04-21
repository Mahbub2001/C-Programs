#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100], str2[100];
	int i, j;

	printf("Please Enter the First String :  ");
	gets(str1);

	printf("Please Enter the Second :  ");
	gets(str2);

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	for (int i = 0; i <= len2; i++)
	{
		str1[len1 + i] = str2[i];
	}

	puts(str1);

	return 0;
}

// WITH STRING FUNCTION:
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[100], str2[100];
//     printf("Enter first string : ");
//     gets(str1);
//     printf("Enter second string : ");
//     gets(str2);

//     // concatenates str1 and str2
//     // the resultant string is stored in str1.
//     strcat(str1, str2);

//     puts(str1);

//     return 0;
// }