
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n, i, temp , tempin, mod , modin, samp, countin, count;
	char cha , ch, str[20] = " ";
	scanf("%d", &n);
	count = 0;
	temp = n;	
	while(temp != 0)
	{
		mod = temp % 10;
		cha =  mod;
		printf("the mod is %d" , mod);
 		if(cha >= '0' && cha <= '9')
		{
			cha;
		}
		else
		{
			cha - 55;
			
		}
		samp = (int) (cha);
		printf("samp is %d\n" , samp);
		countin = 0 ;
		tempin = samp;
		while( tempin != 0)
		{
			modin = tempin % 2;
			ch = modin + 48;
			strncat( str, &ch , 1);
			tempin = tempin / 2;
			countin++;
		}
		count += countin;
		temp = temp / 10;
	}

	for( i = count ; i >= 0 ; i--)
	{
		printf("%c" , str[i]);
	}
	return 0;
}



	
	

	
