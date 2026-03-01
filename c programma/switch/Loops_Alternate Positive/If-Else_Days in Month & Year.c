#include <stdio.h>
#include <string.h>

int main() {

    int month, year;
    scanf("%d %d", &month, &year);
    
    if(year < 1) {
        if(month < 1 || month > 12) {
        printf("Invalid Month\n");
        }
        printf("Invalid Year\n");
        
    }
    else if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        if(month < 1 || month > 12) {
        printf("Invalid Month\n");
        }
        else if(month == 2) {
            printf("29");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            printf("30");
        }
        else {
            printf("31");
        }
    }
    else {
        if(month < 1 || month > 12) {
        printf("Invalid Month\n");
        }
        else if(month == 2) {
            printf("28");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            printf("30");
        }
        else {
            printf("31");
        }
    } 
    return 0;
}
