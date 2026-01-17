#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int area(int length, int width){
    int a = length * width ;
    return a;
}
int main() {
      int l , w ;
    scanf("%d %d",&l ,&w);
    int res = area( l ,w);
    printf("The area is: %d units",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}