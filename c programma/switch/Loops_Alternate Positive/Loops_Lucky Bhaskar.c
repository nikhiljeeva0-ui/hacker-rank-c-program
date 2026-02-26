#include <stdio.h>

int main() {

    int n ;
    double x ;
    double money , minmoney;
    scanf("%lf %d",&x ,&n);
    money = x ;
    minmoney =x ;
    for(int i = 1 ; i<=n ; ){
                if (money < 0.4 * x) {
            printf("Stopped early after %d days: %.2f\n",i - 1 ,money);
            printf("Minimum amount held by Bhaskar: %.2f\n",minmoney);
    
          if(money >0.7* x){
        printf("Lucky Bhaskar");
           
    }
          else{
        printf("Better Luck Next Time!");
    }
    return 0;
        }
         
         if (i % 2 == 0 && i % 3 == 0) {
            money += 0.70* money;
           i += 7;  
        }
         else if (i% 2 == 0) {
            money -= (1.0 / 8.0) *money;
             i++;
        }
        else if(i%3 == 0){
            money -= (1.0 / 5.0) *money;
            i++;
        }
        else{
            money -= 0.10 *money;
            i++;
        }
        if (money < minmoney) {
          minmoney = money;
        }

    }
    printf("After %d days: %.2f\n",n ,money);
    printf("Minimum amount held by Bhaskar: %.2f\n",minmoney);
    
    if(money >0.7* x){
        printf("Lucky Bhaskar");
        
    }
    else{
        printf("Better Luck Next Time!");
    }
    return 0;
}