#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	int i, j, sum, count, powCount, power;
	char n[50];
	scanf("%s", n);

	for( i = 0 ; n[i] != '\0' ; i++)
	{
		count = i;
	}
    sum = 0;
	powCount = 0;
	
	for( j = count ; j >=0 ; j--)
	{
		//sum = 0;
		if( n[j] >= '0' && n[j] <= '9')
		{
			power = (n[j] - 48) * pow(16 , powCount);
		}
		else
		{
			power = (n[j] - 55) * pow(16 , powCount); 
		}
		printf("%d\n", power);
		sum = sum + power;
		powCount++;
		printf("%d\n" , sum);
	}
	printf("%d\n" , powCount);
	return 0;
}
