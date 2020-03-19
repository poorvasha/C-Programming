#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n, i, j, temp, mod, tempin, tempHex, tempIn,  modin, modHex, modIn, count, countin, countHex, countIn;
	char str[20] = "", total[20]="", ch, cha;
	long int con , tempHex;
	printf("enter the octal value:");
	scanf("%d" , &n);

	count = 0;
	temp = n;
	while(temp != 0)
	{
		mod = temp % 10;

		tempin = mod;	
		countin = 0;
					
			while( tempin != 0 || countin < 3)
			{
			    if(tempin == 0)
			    {
			        ch = 0 + 48;
			        strncat( str , &ch , 1);
			    }
			    else
		        {
    				modin = tempin % 2;
    				ch = modin + 48;
    				strncat( str , &ch , 1);
    				tempin = tempin / 2;
		        }
		        countin++;
			}
		
		temp = temp / 10;
		count += 3;
	}
		
	for( i = count ; i >= 0 ; i--)
	{
		printf("%c" , str[i]);
	}
	
	
	con = atol(str)
	

	countHex = 0;
	tempHex = con;
	while(tempHex !=0)
	{
		modHex = tempHex % 10000;

		sum = 0;
		countIn = 0;
		tempIn = modHex;
		while( tempIn != 0)
		{
			modIn = tempIn % 10;
			power = modIn * pow(2 , countIn);
			sum = sum + power;	
			tempIn = tempIn / 10;
			countIn++;
		}
		
		if( sum >= 0 && sum <= 9)
		{
			cha = sum + 48;
		}
		else
		{
			cha = sum + 55;
		}
		
		strncat(total , &cha , 1);
		
		tempHex = tempHex / 10000;
		countHex++;
	
	}
	
	
	for(j = countHex ; j >= 0 ; j--)
	{
	    	printf("%c" , total[j]);
	}


	
	return 0;
}



