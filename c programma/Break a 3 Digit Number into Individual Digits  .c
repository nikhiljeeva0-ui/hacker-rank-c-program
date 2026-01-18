#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void split(int n){
    int A=n/100;
     int B= (n/10)%10;
    int C=n%10;
     
    printf("%d %d %d",A ,B ,C);
    
}
int main() {

    int a;
    scanf("%d",&a);
    split(a);
    return 0;
}
