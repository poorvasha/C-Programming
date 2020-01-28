#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int i, j, n, sp, spDe, sp1, spDe1, temp, p; 
	scanf("%d", &n);
	temp = n;
	spDe1 = 0;
	for(i = 0; i < n; i++)
	{
		for(sp1 = 0; sp1 < spDe1; sp1++)
		{
			printf(" ");
		}
		printf(" -");
		for(j = 0; j < temp; j++)
		{
			printf(" *");
		}
		printf(" - ");
		for(sp1 = 0; sp1 < spDe1; sp1++)
		{
			printf(" ");
		}

		
	spDe1 = spDe1 + 1;
	temp = temp - 1;
	printf("\n");
	}
	


	for( sp = 0; sp <= n; sp++)
	{
		printf(" ");
	}
	for( p = 0; p < 1; p++)
	{
		printf(" - \n");
		
	}
	



	for( sp = 0; sp <= n; sp++)
	{
		printf(" ");
	}
	for( p = 0; p < 1; p++)
	{
		printf(" - \n");
		
	}
	//printf("\n");



	
	spDe = n;
	for(i = 0; i < n; i++)
	{
		for(sp = 0; sp < spDe; sp++)
		{
			printf(" ");
		}
		printf(" -");
		for(j = 0; j < i; j++)
		{
			printf(" *");
		}
		printf(" - ");
		for(sp1 = 0; sp1 < spDe1; sp1++)
		{
			printf(" ");
		}
		
	spDe = spDe - 1;
	printf("\n");
	}
	return 0;
}
