#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int time(int a , int b, int c){
    int result = a*60*60+b*60+c;
    return result;
}
   

int main() {

   int a ,b ,c;
    scanf("%d %d %d", &a ,&b ,&c);
    int res = time( a , b ,c);
    printf("Total seconds: %d",res);
    return 0;
}
