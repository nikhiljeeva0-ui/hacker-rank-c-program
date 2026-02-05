#include <stdio.h>

int main() {

    int a[10];
    int r1 ,r2 , r3 ,w1 ,w2 ,w3;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    scanf("%d %d ",&w1 ,&r1 );
    scanf("%d %d ",&w2 ,&r2 );
    scanf("%d %d ",&w3 ,&r3 );
    if(w1==0){
        a[0]=(a[0]+r1)%10;
    }
    else if(w1==1){
        a[1]=(a[1]+r1)%10;
    }
    else if(w1==2){
        a[2]=(a[2]+r1)%10;
    }
    else if(w1==3){
        a[3]=(a[3]+r1)%10;
    }
    else if(w1==4){
        a[4]=(a[4]+r1)%10;
    }
    else if(w1==5){
        a[5]=(a[5]+r1)%10;
    }
    else if(w1==6){
        a[6]=(a[6]+r1)%10;
    }
    else if(w1==7){
        a[7]=(a[7]+r1)%10;
    }
    else if(w1==8){
        a[8]=(a[8]+r1)%10;
    }
    else if(w1==9){
        a[9]=(a[9]+r1)%10;
    }
    
    

    if(w2==0){
        a[0]=(a[0]+r2)%10;
    }
    else if(w2==1){
         a[1]=(a[1]+r2)%10;
    }
    else if(w2==2){
         a[2]=(a[2]+r2)%10;
    }
    else if(w2==3){
         a[3]=(a[3]+r2)%10;
    }
    else if(w2==4){
         a[4]=(a[4]+r2)%10;
    }
    else if(w2==5){
         a[5]=(a[5]+r2)%10;
    }
    else if(w2==6){
         a[6]=(a[6]+r2)%10;
    }
    else if(w2==7){
         a[7]=(a[7]+r2)%10;
    }
    else if(w2==8){
         a[8]=(a[8]+r2)%10;
    }
    else if(w2==9){
         a[9]=(a[9]+r2)%10;
    }
    
    if(w3==0){
        a[0]=(a[0]+r3)%10;
    }
    else if(w3==1){
        a[1]=(a[1]+r3)%10;
    }
    else if(w3==2){
        a[2]=(a[2]+r3)%10;
    }
    else if(w3==3){
        a[3]=(a[3]+r3)%10;
    }
    else if(w3==4){
        a[4]=(a[4]+r3)%10;
    }
    else if(w3==5){
        a[5]=(a[5]+r3)%10;
    }
    else if(w3==6){
        a[6]=(a[6]+r3)%10;
    }
    else if(w3==7){
        a[7]=(a[7]+r3)%10;
    }
    else if(w3==8){
        a[8]=(a[8]+r3)%10;
    }
    else if(w3==9){
        a[9]=(a[9]+r3)%10;
    }
    if(1){
        printf("%d %d %d %d %d %d %d %d %d %d ",a[0] ,a[1] ,a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    
    }
    
    return 0;
}