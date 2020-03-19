#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a , temp = 0 , mod = 0 , cube = 0, sum = 0;
	scanf("%d" , &a);
	temp=a;
	while(temp != 0)
	{
		mod = temp % 10;
		cube = mod * mod * mod;
		temp = temp / 10;
		sum = cube + sum;
	}
	if(a == sum)
	{
		printf("this is an amstrong");
	}
	else
	{
		printf("this is not an amstrong");
	}
	return 0;
}
