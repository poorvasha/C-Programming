#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	int n, temp, sum, power, mod, count;
	printf("enter the octal value:");
	scanf("%d" , &n);
	sum = 0;
	count = 0;
	temp = n;
	while( temp != 0)
	{
		mod = temp % 10;
		power = mod * pow(8 , count);
		sum = sum + power;
		temp = temp / 10;
		count++;
	}
	printf("octal to decimal value is : %d" , sum);
	return 0;
}

