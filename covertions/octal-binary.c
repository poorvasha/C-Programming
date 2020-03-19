#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n, i, j, temp, mod, tempin, modin, count;
	char str[20] = "", ch;
	printf("enter the octal value:");
	scanf("%d" , &n);

	count = 0;
	temp = n;
	while(temp != 0)
	{
		mod = temp % 10;

		tempin = mod;	
		if(tempin == 0)
		{
			for(j = 0 ; j < 3 ; j++)
			{
				ch = 0 + 48;
				strncat( str , &ch , 1);
			}
		}
		
		else
		{					
			while( tempin != 0)
			{
				modin = tempin % 2;
				ch = modin + 48;
				strncat( str , &ch , 1);
				tempin = tempin / 2;
			}
		}
		temp = temp / 10;
		count += 3;
	}
		
	for( i = count ; i >= 0 ; i--)
	{
		printf("%c" , str[i]);
	}
	return 0;
}
