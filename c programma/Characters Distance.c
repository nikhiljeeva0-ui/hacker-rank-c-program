#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char distance(char A ,char B){
    char dif = B - A;
    return dif;
}
int main() {

    char a, b;
    scanf("%c %c", &a,&b);
    int res = distance(a,b);
    printf("The distance between %c and %c is %d",a ,b ,res);
    return 0;
}
