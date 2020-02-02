#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	char n[10] ,ch, total[10] = "";
	scanf("%s" , n);
	int i, j, num, count;
	
	// to find length
	for (i = 0; n[i] != '\0'; ++i)
        {
		count = i;
        }

	// to read the char from back	
	for(j = count + 1; j >= 0 ; j--)
	{
	
		// to add 1 to the last character 
		if( j == count )
		{
			n[j] = n[count] + 1;
		}

			// if the last charracterr greater than 9 than add 1 to tha previous of the last character 
			// and making last character to 0
		if( n[j] > '9')
		{
			n[j - 1] = n[j - 1] + 1;
				
			n[j] = '0';
		}
			
		// assigning each character to intger 
		// therfore the num = ascii value of that char
		num = n[j];

		// storing that integer to the char so we can get tha ascii value of that num 
		ch = num;

		// concating each char to empty string
		strncat(total , &ch , 1);
		
	}
	
	// to reverse the string
	for (i = count; i >= 0; i --) {
		printf("%c", total[i]);	
	}
	
	return 0;
}
	
