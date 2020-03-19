#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n[10][10], m[10][10], ans[50][50]; 
	int i, j, row1, col1, row2, col2, l, k, mul, sum , b;
	printf("enter the matrix 1\n");
	printf("enter the rows: ");
	scanf("%d" , &row1);
	printf("enter the cols: ");
	scanf("%d" , &col1);




	for( i = 0 ; i < row1; i++)
	{
		for( j = 0 ; j < col1 ; j++)
		{
			
			scanf("%d" , &n[i][j]);
		}
	printf("\n");
	}

	printf("enter the matrix 2\n");
	printf("enter the rows : ");
	scanf("%d" , &row2);
	printf("enter the cols : ");
	scanf("%d" , &col2);




	for( i = 0 ; i < row2 ; i++)
	{
		for( j = 0 ; j < col2 ; j++)
		{
			scanf("%d" , &m[i][j]);
		}
	printf("\n");
	}



	

	for( k = 0 ; k < row1; k++)
	{
		for( l = 0 ; l < col2 ; l++)
		{
			
			sum = 0;
			for( b = 0 ; b < col1 ; b++)
			{
				mul = n[k][b] * m[b][l] ;
				sum = sum + mul;
				
			}
			ans[k][l] = sum;
			
		}
	}
	
	for( i = 0 ; i < row1 ; i++)
	{
		for( j = 0 ; j < col2 ; j++)
		{
			printf("%d\t" , ans[i][j]);
		}
	printf("\n");
	}
	
	
	return 0;
}
