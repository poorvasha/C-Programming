
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// function declaration
int biDeci();
int biHex();
int biOct();

// main fun
int main(){

    int ex;
	long int n;
	char s[20];
	
	printf("Enter the binary value: ");
	scanf("%ld" , &n);
	printf("enter the convertions\n");
	printf("1.binary-hex\n");
	printf("2.binary-deci\n");
	printf("3.binary-octal\n");
	printf("Enter your choice: ");
	scanf("%s", s);

	// condition for respected convertion by fun call
	if( strcmp( s , "binary-deci") == 0)
	{
		biDeci(n);
	}

	else if( strcmp( s , "binary-hex") == 0)
	{
		biHex(n);
	}

 	else if( strcmp( s , "binary-octal") == 0)
 	{
 		biOct(n);
 	}
	else{
		printf("enter the covertion name correctly");
	}
	printf("\n");
	printf("\ndo you want to exit enter 0 : ");
    scanf("%d" , &ex);
    printf("\n");
    printf("\n");
    if(ex == 0){
        return 0;
    }
    else{
       return main(); 
    }

}


// binary to decimal
int biDeci(int a) {
	
	int count, temp, mod, power, sum;	
	temp = a;
	sum = 0;
	count = 0;
	while( temp != 0)
	{
		mod = temp % 10;
		
        	power = mod * pow(2 , count);
		sum = sum + power;
		
		temp = temp / 10;
		
		count++;
	}
	printf("%d" , sum);	
	return 0;
}


//binary - hexadecimal
int biHex(long int a){

	long int temp; 
	int i, countin, count, tempin, mod, modin, power, sum, result;
	char ch, total[50] =" ";	
	//scanf("%ld" , &n);
	count = 0;
	temp = a;
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


// binary - octal

int biOct( int a ){

	int count, temp, tempin ,mod, modin, power, sum, result, countOut, k;
	char s[20], total[20] = "";	
	//scanf("%d" , &n);
	temp = a;
	countOut = 0; 
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
		
		
	    //printf("the sum is %d\n" , sum);
    		sprintf( s, "%d" , sum);
		strcat(total , s);
		//result = atoi(total);
		temp = temp / 1000;
		countOut++;
	}

	for(k = countOut + 1 ; k >= 0 ; k-- )
	{
	    printf("%c" , total[k]);
	}
	//printf("%d" , result);
	return 0;

}



