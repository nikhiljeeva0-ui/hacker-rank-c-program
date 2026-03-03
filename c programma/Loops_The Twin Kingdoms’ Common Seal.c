#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int A,B;
    scanf("%d %d",&A ,&B);
    while(B!=0){
        int temp = B ;
          B = A % B;
        A = temp;
    }
    printf("%d",A);
    return 0;
}

