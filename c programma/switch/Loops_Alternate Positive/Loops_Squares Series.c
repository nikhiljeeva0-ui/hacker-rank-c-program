#include <stdio.h>

int main() {

   int n,count = 0;
    scanf("%d",&n);
    for(int i =1 ; count < n ;++i){
        int square = i * i ;
         if (square % 3 != 0) {
            printf("%d ", square);
            count ++;
        }
    }
    return 0;
}
