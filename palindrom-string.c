#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int a , mod = 0 , result = 0;
    scanf("%d", &a);
    int rem = a;
    char s[30] , total[30] = "";
	 // loop exist untill reminder become 0
	 while( rem !=0 )
	{
		// to get the last digit of integer
		mod = rem % 10;

		// to convert integer into string 
		sprintf(s, "%d" , mod);
		
		// concatenation the mod with empty string
		strcat(total , s);
		
		// dividing by 10 to get interger except last digit
		rem = rem / 10;
		
		// the total varaible is a string so "atoi" converts it to interger
		result = atoi(total);
	}
	
	if(a == result)
	    {
		printf("the num is palindrome");
	    }
	    else
	    {
		printf("the num is not palindrom");
	    }
	    return 0;
	}
