
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	int i, j, k, tempin, modin, countin, cha, count; 
	char n[20], ch, str2[20] = "";
	scanf("%s", n);
	count = 0;
	
    	for(j = 0 ; n[j] != '\0'; j++)
	{
	    
		if(n[j] >= '0' && n[j] <= '9')
	    	{
	        	cha = n[j] - 48;
	    	}
	    	else
	    	{
	         	cha = n[j] - 55;
	    	}
	   
	   
	    
		countin = 0 ;
		tempin = cha;
		char str[20] = "";
		while(countin < 4)
		{
			if(tempin == 0)
			{
				ch = 48;
				strncat( str, &ch , 1);
				//countin++;
			}
			else{

			modin = tempin % 2;
			ch = modin + 48;
			strncat( str, &ch , 1);
			tempin = tempin / 2;
			//countin++; 
			}
			countin++;
		}
		


		for( i = countin  ; i >= 0 ; i--)
        	{
            		strncat(str2 , &str[i] , 1);
        	}
        
	}
	printf("%s" , str2);
	return 0;
}
	





		
			
