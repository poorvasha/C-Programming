#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n, mod, temp, count, i;
	char ch, ans[100] = " ";
	printf("enter the number: ");
	scanf("%d" , &n);
	count = 0;
	temp = n;
	
	while( temp != 0)
	{
		mod = temp % 16;
		//printf("%d\n" , mod);
		if( mod <= 9)
		{
			ch = mod + 48;
		}
		else
		{
			ch = mod + 55;
		}
		
		strncat( ans , &ch, 1);	
		temp = temp / 16;
		count++;
	}
	printf("the number: ");
	for(i = count ; i >= 0; i--)
	{
		printf("%c", ans[i]);
	}
	return 0;
}
	
	
	
