#include <stdio.h>




int four(int a, int b, int c, int d){
    if(a>b){
        return a;
    }else{ return b;}
    if(a>c){
        return a;
    }else{
        return c;
    }
    if(a>d){
        return a;
    }else{
        return d;
    }
     if(b>c){
        return b;
    }else{
        return c;
    }
     if(c>d){
        return c;
    }else{
        return d;
    }
     if(b>d){
        return b;
    }else{
        return d;
    }
    }
    //return (m1=a>b?a:b)>(m2=c>d?c:d)?m1:m2;
   /* int max_of_four(int a, int b, int c, int d) {
    int max1 = a > b ? a : b;
    int max2 = c > d ? c : d;
    return max1 > max2 ? max1 : max2;

    
}*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


