
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n, count, temp, tempin mod, modin, power, sum, result;
	char s[20], total[20];	
	scanf("%d" , &n);
	
	while(temp !=0)
	{
		mod = temp % 1000;
		sum = 0;
		count = 0;
		tempin = mod;
		while( tempin != 0)
		{
			modin = tempin % 10;
			power = modin * pow(2 , count);
			sum = sum + power;	
			tempin = tempin / 10;
			count++;
		}
	
    		sprintf( s, "%d" , sum);
		strcat(total , s);
		result = atoi(total);
		temp = temp / 1000;
	printf("%d" , result);
	}
	//printf("%d" , result);
	return 0;
		
}
