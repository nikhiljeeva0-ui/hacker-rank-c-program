#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 float half( float A){
     float hal = A/2.0 ;
     return hal;
 }
int main() {

  int a ;
 scanf("%d",&a);
  float res = half(a); 
    printf("Half of %d is %.2f",a ,res);
    return 0;
}
