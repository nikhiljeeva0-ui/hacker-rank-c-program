#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     unsigned int h , m ;
    scanf("%d %d",&h ,&m);
   if(m<10){
        if(h>=1 && h<12){
        printf("%d:0%d AM",h,m);
    }
    else if(h==12){
        printf("%d:0%d PM",h,m);
    }
    else if(h==00){
        int hour = h +12 ;
        printf("%d:0%d AM",hour,m);
    }
    else{
        int res = h-12;
        printf("%d:0%d PM",res ,m);
    }  
   }
    
    
    
    else{
         if(h>=1 && h<12){
        printf("%d:%d AM",h,m);
    }
    else if(h==12){
        printf("%d:%d PM",h,m);
    }
    else if(h==00){
        int hour = h +12 ;
        printf("%d:%d AM",hour,m);
    }
    else{
        int res = h-12;
        printf("%d:%d PM",res ,m);
    }  
    }
    return 0;
}
