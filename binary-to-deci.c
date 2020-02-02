#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n, count, temp, mod, power, sum;	
	scanf("%d" , &n);
	
	
	//printf("%d", integer);
	temp = n;
	sum = 0;
	count = 0;
	while( temp != 0)
	{
		mod = temp % 10;
		
        	power = mod * pow(2 , count);
		sum = sum + power;
		
		temp = temp / 10;
		
		count++;
	}
	printf("%d" , sum);
			
	return 0;
		
}
