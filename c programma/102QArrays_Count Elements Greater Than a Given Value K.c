#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
         int N, K, count = 0;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);
    for (int i = 0; i < N; i++) {
        if (arr[i] > K) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
