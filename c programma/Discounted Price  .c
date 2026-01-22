#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discount( float price , float percent){
    float discountAmount = ( price * percent ) / 100; 
    float res = price - discountAmount ;
    return res;
}
int main() {
  float price , percent;
    scanf("%f %f",&price,&percent);
    float result = discount(price , percent);
    printf("The final price is: %f ",result);
  
    return 0;
