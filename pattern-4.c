#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int i, j, n, sp, spDe; 
	scanf("%d", &n);
	spDe = n;
	for(i = 0; i <= n; i++)
	{
		for(sp = 0; sp < spDe; sp++)
		{
			printf(" ");
		}
		for(j = 0; j < i; j++)
		{
			printf("*");
		}
	spDe = spDe - 1;
	printf("\n");
	}
	return 0;
}
