#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, mod = 0, addTemp = 0 , temp;  
	scanf("%d" , &n);
	temp = n;
	while( temp != 0 )
	{
		mod = temp % 10;
		temp = temp / 10;
		
		addTemp = addTemp + mod;
	}
	if((n % addTemp) == 0)
	{
		printf("harshad");
	}
	else
	{
		printf("not harshad");
	}
	return 0;
}
