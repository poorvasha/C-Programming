#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 		
	int n, i, j, inc, init, temp, sp, spDe;
	scanf("%d", &n);
	inc = n + 1;
	init = inc + n;
	temp = init;
	spDe = 0;
	for(i = 0 ; i <= n ; i++)
	{

		for( sp = 0 ; sp < spDe ; sp++)
		{
			printf("   ");
		}

		for(j = 0 ; j < temp ; j++)
		{
			printf(" * ");
		}
	spDe = spDe + 1;
	temp = temp - 2;
	printf("\n");

	}

	return 0;
}
