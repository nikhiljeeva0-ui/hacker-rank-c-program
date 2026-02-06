#include <stdio.h>

int main() {

    int age,income,tol;  
    scanf("%d %d %d",&age , &income,&tol);
    if(age <30){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if((age >= 30 && age <= 50)&& income>75000 && tol==3){
         printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(age>50 && income>75000 && tol==3){
         printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if((age >= 30 && age <= 50)&& income<=75000 && tol==2){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if((age >= 30 && age <= 50)&& income>75000 && (tol==2|| tol==1)){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if(age>50){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if(income<=30000 && (tol==2|| tol==1)){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else{
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    return 0;
}