#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 		
	int i , j , n, temp = 1, sp , spDe;
	scanf("%d", &n);
	spDe = n;				
	for(i = 0; i <= n ; i++)
	{
		
		for( sp = 0 ; sp < spDe ; sp++)
		{
			printf("   ");
		}
				
		for( j = 0 ; j < temp ; ++j)
		{
			printf(" * ");
		}
	
		
	spDe = spDe - 1;
	temp = temp + 2;	
	printf("\n");
		
	
}

	return 0;
}
