#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int n[10][10], m[10][10], p[10][10], i, j, row, col, l, k;
	printf("enter the matrix 1\n");
	printf("enter the rows: ");
	scanf("%d" , &row);
	printf("enter the cols: ");
	scanf("%d" , &col);
	for( i = 0 ; i < row; i++)
	{
		for( j = 0 ; j < col ; j++)
		{
			
			scanf("%d" , &n[i][j]);
		}
	printf("\n");
	}

	printf("enter the matrix 2\n");
	printf("enter the rows : ");
	scanf("%d" , &row);
	printf("enter the cols : ");
	scanf("%d" , &col);
	for( i = 0 ; i < row ; i++)
	{
		for( j = 0 ; j < col ; j++)
		{
			
			scanf("%d" , &m[i][j]);
		}
	printf("\n");
	}

	printf("yes");
	for( k = 0 ; k < row; k++)
	{
		for( l = 0 ; l < col ; l++)
		{
			
			p[k][l] = n[k][l] + m[k][l];
			printf("%d\t" , p[k][l]);
		}
	printf("\n");
	}
	return 0;
}
