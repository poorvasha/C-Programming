
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int i, j, k, temp, mod, count, num, countIn, countOct, modIn, tempIn, sum, power, intOct;  
	char n[20], ch, str2[20] = "", cha , strOct[20] = "" , s[20];
	long int con, tempOct , modOct;
	scanf("%s", n);

	
    	for(j = 0 ; n[j] != '\0'; j++)
	{
	    
		if(n[j] >= '0' && n[j] <= '9')
	    	{
	        	num = n[j] - 48;
	    	}
	    	else
	    	{
	         	num = n[j] - 55;
	    	}

	   
	   	count = 0 ;
		temp = num;
		char str[20] = "";
		while(count < 4)
		{
			if(temp== 0)
			{
				ch = 48;
				strncat( str, &ch , 1);
			}
			else
			{
				mod = temp % 2;
				ch = mod + 48;
				strncat( str, &ch , 1);
				temp = temp / 2;
			}
			count++;
		}


		for( i = count  ; i >= 0 ; i--)
        	{
            		strncat(str2 , &str[i] , 1);
        	}
        
	} 
	//printf("the string is %s\n" , str2);
	
	con = atol(str2);
	
	printf("the con is %ld\n" , con);
	countOct = 0;
	tempOct = con;
	while( tempOct != 0)
	{
		modOct = tempOct % 1000;
        	//printf("the modOct is %d\n" , modOct);
		tempIn = modOct;
		countIn = 0;
		sum = 0;
		while( tempIn != 0)
		{
			modIn = tempIn % 10;
			power = modIn * pow( 2 , countIn);
			sum = sum + power;
			tempIn = tempIn / 10;
			countIn++;
		}
		printf("the sum is %d\n" , sum);
		sprintf( s , "%d" , sum);
		strcat( strOct , s);
		tempOct = tempOct / 1000;
	    	countOct++;

	}
	
	for(k = countOct + 1 ; k >= 0 ; k-- )
	{
	    printf("%c" , strOct[k]);
	}
 	return 0;


}



