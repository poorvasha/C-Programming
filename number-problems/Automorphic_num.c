#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	int n , 
		modN = 0, modSq =0, 
		tempN = 0, tempSq = 0, 
		square , flag;


	scanf("%d" , &n);
	square = n * n;

	tempN = n;
	tempSq = square;
	while(tempN != 0 && modN == modSq)
	{
		modN = tempN % 10;
		modSq = tempSq % 10;
		tempN = tempN / 10;
		tempSq = tempSq / 10;
		
		if(modN == modSq && tempN == 0)
		{
			flag = 1;
			
		}
		else
		{
			flag = 0;
		}
		
	}
	if(flag == 1)
	{
		printf("the number is automorphic");
	}
	else
	{
		printf("the number is not automorphic");
	}

	return 0;


}
