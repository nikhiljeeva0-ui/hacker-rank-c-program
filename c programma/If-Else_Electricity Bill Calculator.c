#include <stdio.h>


int main() {
    int unit;
     float res = 0;
    scanf("%d", &unit);
    
    if (unit < 0) {
        printf("Invalid Input!");
        return 0;
    }

    if (unit <= 100) {
        res = unit * 5;
    } 
    else if (unit <= 300) {
        res = 100 * 5 + (unit - 100) * 7;
    } 
    else {
        res = 100 * 5 + 200 * 7 + (unit - 300) * 10;
    }

    
    if (res <= 1200) {
        res = res - (res * 0.10);
    }

    printf("The electricity bill is: %.2f.", res);

    return 0;
}
