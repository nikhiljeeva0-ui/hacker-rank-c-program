#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A;
    scanf("%d",&A);
    int a200 = 0, a100 = 0 ,a500 = 0 ;
    if (A <= 0) {
        printf("Invalid amount");
        return 0;
    }

    for(; A>=500 ; A-=500){
        a500++;
         
    }
    for(; A>=200 ; A-=200){
        a200++;
         
    }
    for(; A>=100 ; A-=100){
        a100++;
         
    }
    
    printf("500-rupee notes: %d\n", a500);
    printf("200-rupee notes: %d\n", a200);
    printf("100-rupee notes: %d\n", a100);
    return 0;
}
