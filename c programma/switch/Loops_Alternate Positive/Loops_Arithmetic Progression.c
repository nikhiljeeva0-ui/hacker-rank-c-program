#include <stdio.h>

int main() {

    int n;
    int a , d ;
    scanf("%d",&n);
    scanf("%d %d",&a,&d);
    for(int i = 0 ; i <n ; ++i){
        int an =  a + i * d;
        printf("%d ",an);
        
    }
    return 0;
}