#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
     char n[10] , p[10];
     int flag = 0, i;
     scanf("%s" , n);
     scanf("%s" , p);

    //flag = 0;
   
     for( i = 0 ; n[i] != '\0' || p[i] != '\0' ; i++)
     {
        //  flag = 0;
       
         while(flag == 0){
           
            if(n[i] == p[i]){
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
         }
         //printf("%d" , flag);
     }

     if( flag == 0){
         printf("matched");
     }
     else{
         printf("not matched");
     }
     return 0;

}