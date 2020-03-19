#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
 
	int n, j, mod, count, temp ;
	char ch , str[50] = " ";
	scanf("%d", &n);
	temp = n;
	count = 0;

	while(temp != 0)
	{ 
		mod = temp % 8;
		
		ch = mod + 48;
		strncat( str , &ch , 1);
		
		temp = temp / 8;
		count++;
	}

	for ( j = count ; j >= 0 ; j--)
	{
		printf("%c" , str[j]);
	}	
	return 0;	
	
}	

