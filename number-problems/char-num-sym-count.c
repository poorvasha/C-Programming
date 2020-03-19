#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
	char n[50], ch;
	int i, charCount = 0, numCount = 0 , symCount = 0;
	scanf("%s" , n);

	for( i = 0; n[i] != '\0' ; i++)
	{
		ch = n[i];

		if( ('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
		{
			charCount = charCount + 1;
			
		}

		else if('0' <= ch && ch <= '9')
		{
			numCount = numCount + 1;
		}

		else
		{
			symCount = symCount + 1;
		}
	
	}
	printf("num of character : %d\n" , charCount);
	printf("num of numbers : %d\n" , numCount);
	printf("num of symbol : %d" , symCount);
	
	return 0;
	
}
		
