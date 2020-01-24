#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int n, i, sum=0;
	scanf("%d", &n);

	// for to multiply all integers with input 
	for(i = 1; i <= n/2; i++)
	{

		// if the reminder is 0 then the num gets added
		if((n % i) == 0)
		{	
			sum = sum + i;
		}
	}

	if(n == sum)
	{
		printf("the num is Perfect number");
	}
	else
	{
		printf("the num is not perfect number");
	}
	return 0;
}
