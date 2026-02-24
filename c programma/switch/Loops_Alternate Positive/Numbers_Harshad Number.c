#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
     int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    int sum = d1 + d2 + d3 + d4;
     if (sum != 0 && n % sum == 0) {
        printf("%d is a harshad number",n);
      } else {
        printf("%d is not a harshad number",n);
      }

    return 0;
}
