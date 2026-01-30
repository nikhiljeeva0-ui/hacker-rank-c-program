#include <stdio.h>

int main() {

    int a , b;
    scanf("%d %d",&a,&b);
    int dif = a - b;

    if((dif >> 31 & 1) == 1 ){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    
    return 0;
}