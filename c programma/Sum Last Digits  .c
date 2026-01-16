#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumLastDigits(int a, int b){
    int last_digit_a= a%10;
     int last_digit_b= b%10;
    int sum = last_digit_a + last_digit_b;
    return sum;
    
}
int main() {
     int A ,B ;
    scanf("%d %d",&A ,&B);
    int res = sumLastDigits(A , B);
    printf("The sum of last digits is: %d",res);
     
    return 0;
}

