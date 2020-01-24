#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n , i, rem , mod , fac, sum = 0;
	scanf("%d" , &n);
	rem = n;
	while(rem != 0)
	{
		mod = rem % 10;
		fac = 1;
		for(i = 1 ; i <= mod ; i++)
		{
			fac = fac * i;
		}

		rem = rem / 10;
		sum = sum + fac;
	}
	if(n == sum)
	{
		printf("the num is strong number");
	}
	else
	{
		printf("the num is not strong number");
	}
	return 0;
}
