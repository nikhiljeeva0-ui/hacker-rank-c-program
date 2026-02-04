#include <stdio.h>

int main() {

   
   int n ;
    scanf("%d",&n);
    if (n <= 0) {
     
         printf("The verdict for the number %d is: INVALID",n );
        return 0;
    }

    int cond1 = 0;
    int cond2 =0;
    int cond3 = 0;
    
    if(n>10 && n%2==0){
        cond1 = 1 ;
    }
     if(n>15 && n%3 ==0){
        cond2 = 1;
    }
    if(n%7 == 0){
        cond3 = 1 ;
    }
    
    int count = cond1 + cond2 + cond3 ;
    if(count == 3 ){
       
        printf("The verdict for the number %d is: SUPERNATURAL",n );
    }
    else if(count == 2){
        
        printf("The verdict for the number %d is: MIRACULOUS",n );
    }
    else if(count ==1 ){
    
        printf("The verdict for the number %d is: MAGICAL",n );
    }
    else {

        printf("The verdict for the number %d is: NORMAL",n );
    }
      
    return 0;
}