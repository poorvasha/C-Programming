#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n , count = 0, square, lenSq, power, temp;
	scanf("%d" , &n);
	temp = n
	// to find lenght of given number
	for(count = 0 ; temp != 0; count++)
	{
		temp = temp / 10;
	}
	printf("%d" , count);
	
	// square of input number
	square = n * n;
	
	// to get the last digits of square 
	power = pow(10 , count);
	lenSq = square % power;
	
	// checking 
	if( n == lenSq)
	{
		printf("auto");
	}
	else
	{
		printf("not auto");
	}
	return 0;
}


