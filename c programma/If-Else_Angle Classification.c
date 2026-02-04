#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int D ;
    scanf("%d",&D);
  if (D == 0) {
        printf("Acute Angle");
        return 0;
    }
    if(D%360==0){
        printf("Full Rotation");
        return 0;
    }
    if(D%360 < 90){
        printf("Acute Angle");
    }
    else if(D%360 == 90){
        printf("Right Angle");
    }
   else if(D%360 < 180){
       printf("Obtuse Angle");
   }
    else if(D%360 == 180){
        printf("Straight Angle ");
    }
    else{
        printf("Reflex Angle");
    }
}

