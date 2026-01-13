#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
  
    
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int found = 0;
    int sec;
    for (int i = 0; i < n; i++) {
        if (arr[i] < max) {
            if (!found || arr[i] > sec) {
                sec = arr[i];
                found = 1;
            }
        }
    }
   if (found){
       return sec;
   }
        
    else{
        return -1;
    }
        
}     

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}