#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int i , j , n, k;
	scanf("%d" , &n);
	
	for( i = 0 ; i <= n ; i++)
	{

		for( k = 0 ; k <= (n - i) ; k++)
		{
			printf("  ");
		}
	
		for( j = 0 ; j <= i; j++)
		{
			printf(" *");
		}
	printf("\n");
	}
	return 0;
}
