#include <stdio.h>
int gcd(int A , int B)
{ 
  int  g;
    for(int i = 1; i <= A&& i <= B; i++) {
        if(A % i == 0 && B % i == 0) {
            g = i;
        }
    }
    return g ;
}
int main(){
  int res = gcd(10 , 30);
  printf("%d",res);
}