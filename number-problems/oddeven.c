#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char num[100][100]={"one","two","three","four","five","six","seven","eight","nine"};
        if(a>=1 && a<=9){
        printf("%s\n",num[a-1]);
        }
        if(b>9 && b%2==1){
            printf("even");
        }
        else{
            printf("odd");
        }
        
    return 0;
}



