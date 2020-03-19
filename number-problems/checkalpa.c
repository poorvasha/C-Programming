#include <stdio.h>

int main()
{
    char n[100];
    printf("Enter: ");
    scanf("%[^\n]s",n);
    int alpha = 0; 
    int num = 0;
    for(int i=0; n[i]!='\0'; i++){
    if( (n[i]>='a' && n[i]<='z') || (n[i]>='A' && n[i]<='Z')){
	 alpha = 1;
	}
    else{
    if(n[i]>='0' && n[i]<='9'){
         num = 1;
	}
	}
  }
  if(alpha ==1 && num ==1)
	{
		printf("alpha and num");
	}
	if(alpha==1 && num==0)
	{
		printf("alpha");
	}
	if(num==1 && alpha==0)
	{
		printf("num");
	}
return 0;
}
