#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int n , i, sum = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n/2; i++)
	{
		if((n % i) == 0)
		{
			sum = sum + i;
			printf("%d" , i);
		}
	}
	if(sum > n)
	{
		printf("the num is abundant number");
	}
	else
	{
		printf("the num is not abundant number");
	}
	return 0;
}
