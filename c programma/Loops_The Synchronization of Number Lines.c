#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int a , b ;
    scanf("%d %d",&a , &b);
   
    int A = a, B = b;

    while (B != 0) {
        int r = A % B;
        A = B;
        B = r;
    }

    int gcd = A;
  int lcm = (a / gcd) * b;

    printf("%d", lcm);
    return 0;
}

  
