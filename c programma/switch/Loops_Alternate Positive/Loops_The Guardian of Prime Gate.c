#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, flag = 0;
    scanf("%d", &n);
    
      if (n == 0 || n == 1||n<0) {
        printf("None");
        return 0;
    }

     for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;  
            break;
        }
    }

    if (flag == 0){
        printf("Prime");
    }
        
    else{
         printf("Composite");
    }
       

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
