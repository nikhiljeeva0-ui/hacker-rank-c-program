#include <stdio.h>
int sumOfDigit(int n){
    int sum;
    if(n < 9){
      return n;
    }
    while (n > 9) {
        sum = 0;
     while (n > 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }
      n = sum;
    }
    return n;
}
int main()
{
  
   int res = sumOfDigit(99993);
   printf("%d",res);
  
    
}