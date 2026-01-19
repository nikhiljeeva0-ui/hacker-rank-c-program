#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void format(int I ,long L,char C,float F,double D){
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",I,L,C,F,D);
    
}

int main() {

    int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&i ,&l ,&c ,&f ,&d);
    format(i,l,c,f,d);
    return 0;
}
