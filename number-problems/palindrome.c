#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int a , mod = 0, rev = 0;
    scanf("%d", &a);
    int reminder = a;

    while(reminder != 0)
    {
        mod = reminder % 10;
        rev = rev * 10 + mod;
        reminder = reminder / 10;
    }
    if(a == rev)
    {
        printf("the num is palindrome");
    }
    else
    {
        printf("the num is not palindrom");
    }
    return 0;
}