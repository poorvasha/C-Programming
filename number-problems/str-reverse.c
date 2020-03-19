#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    char rev, total[30] , s[] = "Programming";
    int i, j, count;

    for (i = 0; s[i] != '\0'; ++i)
    {
	count = i;
    }
    printf("Length of the string: %d", count);
	
	for ( j =  count+1 ; j >= 0 ; j--)
	{
		rev = s[j]; 
		printf("%c" , rev);
		//strcat(total , rev);
	}
	//printf("%s" , total);

    return 0;
}

