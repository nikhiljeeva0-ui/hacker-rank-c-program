#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n;
    scanf("%d",&n);
    int a[n];
 
    long long sum=0;
    for(int i=0; i<= n-1; i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
   double avge = (double)sum/ n ;
    
    
    printf("%f",avge);
    
    
    return 0;
}
