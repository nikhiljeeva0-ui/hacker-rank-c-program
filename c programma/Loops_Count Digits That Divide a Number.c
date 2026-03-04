#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      int num;
    scanf("%d", &num);

    int temp = num;
    int count = 0;

    while (temp > 0) {
        int digit = temp % 10;  

        if (num % digit == 0) {
            count++;
        }

        temp = temp / 10;     
    }

    printf("%d", count);
    return 0;
}

