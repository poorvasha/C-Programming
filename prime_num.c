#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, i, flag;
	scanf("%d" , &n);
	for( i = 1; i < n / 2 ; i++)
	{
		if((n%i) == 0)
		{
			flag = 1;
		}
	}
	if(flag == 1)
	{
		printf("not a prime number");
	}
	else
	{
		printf("prime number");
	}
	return 0;
}

