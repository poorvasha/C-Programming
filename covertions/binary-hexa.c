#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

     	long int n , temp; 
	int i, countin, count, tempin, mod, modin, power, sum, result;
	char ch, total[50] =" ";	
	scanf("%ld" , &n);
	count = 0;
	temp = n;
	while(temp !=0)
	{
		mod = temp % 10000;

		sum = 0;
		countin = 0;
		tempin = mod;
		while( tempin != 0)
		{
			modin = tempin % 10;
			power = modin * pow(2 , countin);
			sum = sum + power;	
			tempin = tempin / 10;
			countin++;
		}
		
		if( sum >= 0 && sum <= 9)
		{
			ch = sum + 48;
		}
		else
		{
			ch = sum + 55;
		}
		
		strncat(total , &ch , 1);
		
		temp = temp / 10000;
		count++;
	
	}
	
	
	for(i = count ; i >= 0 ; i--)
	{
	    	printf("%c" , total[i]);
	}

	return 0;
		
}
