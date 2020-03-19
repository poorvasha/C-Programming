#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int i, j, n, sp, spDe, temp; 
	scanf("%d", &n);
	temp = n;
	spDe = 0;
	for(i = 0; i <= n; i++)
	{
		for(sp = 0; sp < spDe; sp++)
		{
			printf(" ");
		}
		for(j = 0; j < temp; j++)
		{
			printf(" *");
		}
	spDe = spDe + 1;
	temp = temp - 1;
	printf("\n");
	}
	return 0;
}
