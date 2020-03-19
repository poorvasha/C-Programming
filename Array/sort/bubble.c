#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int arr[10] , n, temp, i, j, count , m, k;
	printf("enter the value: ");
	scanf("%d" , &n);
	for ( i = 0 ; i <= n ; i++){
		printf("enter the num: ");
		scanf("%d" , &arr[i]);
	}

	count =  0;
	while( count <= n){

		for( k = 0 ; k < n ; k++){

			if( arr[k] > arr[k+1]){

				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	count++;
	}

	for( j = 0 ; j <= n ; j++)
	{ 
		printf("%d\n" , arr[j]);
	}

	return 0;
}





















/*int main(){

	int arr[50] , n, temp, i;
	printf("enter the value: ");
	scanf("%d" , &n);
	temp =  n;
	for ( i = 1 ; i <= n ; i++){
		temp = temp - 1;
		arr[i] = temp;
		printf("%d\n" , arr[i]);
	} 
}*/

