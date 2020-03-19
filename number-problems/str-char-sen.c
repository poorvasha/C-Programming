#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char s[50];
    char sen[50];
    scanf("%c", &c);
    scanf("%s", &s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s",sen);  
    return 0;
}
