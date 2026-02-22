#include <stdio.h>

int main() {

    int n ;
    scanf("%d",&n);
    int num1 = 1 ;
   if(n<=0){
       return 0 ;
   }
    printf("<");
    for( int i = 1 ; i <=n ;++i){
         printf("%d", num1);
        if (i < n) {
            printf(" ");
        }
        num1 = num1 * 2;
    }
     printf(">");
    
    return 0;
}
