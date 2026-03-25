#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    long long min, x;
    scanf("%lld", &min);   

    for (int i = 1; i <=N-1; i++) {
        scanf("%lld", &x);
        if (min > x) {
        min = x;
        }
    }

    printf("%lld", min);
    return 0;
}
