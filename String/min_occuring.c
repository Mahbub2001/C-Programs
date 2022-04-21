#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int min = 0;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0)
		{
			if(freq[min] == 0 || freq[i] < freq[min])
			{
				min = i;
			}
		}
	}
	printf("\n Character '%c' appears Minimum of %d Times in a Given String :  %s ", min, freq[min], str);
		
  	return 0;
}