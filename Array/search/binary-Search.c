#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int arr[50], len, n, i, j, k, count, halfArr, divi, flag, temp, value, sub;  
	printf("enter the length");
	scanf("%d", &len);
	
	for(i = 0 ; i < len ; i++)
	{
		scanf("%d" , &arr[i]);
		//printf("%d" ,  i);
	}
   
        count =  0;
	while( count < len){

		for( k = 0 ; k < len ; k++){

			if( arr[k] > arr[k+1]){

				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	count++;
	}

    printf("enter the num to search: ");	
	scanf("%d" , &n);
	halfArr = len ;
	divi = halfArr / 2;
	//flag = 1;
	sub= 0;
	value = 0;
	while(value <= n)
	{
		if( arr[divi] == n)
		{
			printf("the index is : %d ", divi-1);
			break;
		}
		else if( arr[divi] < n )
		{
				sub = (len+1) + divi;
				divi = sub/2;
		}
		else
		{
		    	sub = divi; 
			    divi = sub/2;	
		}
		value++;
	}
	return 0;
}
























#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int arr[50], len, n, i, j,k, count, first, last, middle, temp;   
	printf("enter the length");
	scanf("%d", &len);
	
	for(i = 0 ; i <= len ; i++)
	{
		scanf("%d" , &arr[i]);
	}
   
        count =  0;
	while( count <= len){

		for( k = 0 ; k < len ; k++){

			if( arr[k] > arr[k+1]){

				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	count++;
	}

    printf("enter the num to search: ");	
	scanf("%d" , &n);
	first = 0;
	last = len;
	middle = first + last / 2;

	while(first <= last)
	{
		if( arr[middle] < n)
		{
			first = middle + 1;
			middle = (first + last)/2;
		}
		else if( arr[middle] == n)
		{
			printf("the index is %d" , middle);
			break;
		}
		else
		{
			last = middle - 1;
			middle = (first + last)/2;
		}
	}
	return 0;
}




	
	
