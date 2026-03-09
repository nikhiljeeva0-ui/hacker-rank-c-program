#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0)
        return 0;
    int a[n];
    for(int i = 0 ; i< n ; ++i){
        a[i] = (i*2) + 1;
        
    }
   
    for(int i = n - 1; i>=0; i--){
        
        printf("%d",a[i]);
          if (i != 0){
            printf(" ");   
          }
           
    }
    
   printf(".");
    return 0;
}