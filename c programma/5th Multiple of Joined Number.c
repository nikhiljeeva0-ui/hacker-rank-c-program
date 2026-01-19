#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int buildNumber(int a, int b, int c, int d){
     int sum = a*1000 + b*100 +c*10 +d;
     int mult = sum*5 ;
     return mult;
     
     
 }
int main() {
     int A ,B ,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    int res = buildNumber(A,B,C,D);
    printf("The number is: %d",res);
    return 0;
}
