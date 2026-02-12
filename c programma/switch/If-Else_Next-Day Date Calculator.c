#include <stdio.h>

int main() {
    int D, M, Y;
    scanf("%d %d %d", &D, &M, &Y);

    int date;

  
    if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) {

        
        if (M == 1) {
            if (D == 31) { 
                date = 1;
                M++; 
            }
            else { 
                date = D + 1;
            }
        }

        
        else if (M == 2) {
            if (D == 29) {
                date = 1;
                M++;
            }
            else { 
                date = D + 1; 
            }
        }

       
        else if (M == 3) {
            if (D == 31) { 
                date = 1; 
                 M = M +1; 
            }
            else {
                date = D + 1;
            }
        }


        else if (M == 4) {
            if (D == 30) {
                date = 1;
               M = M +1; 
            }
            else { 
                date = D + 1;
            }
        }

   
        else if (M == 5) {
            if (D == 31) {
                date = 1;
              M = M +1; 
            }
            else { 
                date = D + 1;
            }
        }

    
        else if (M == 6) {
            if (D == 30) { 
                date = 1;
                 M = M +1; 
            }
            else { 
                date = D + 1; 
            }
        }

 
        else if (M == 7) {
            if (D == 31) { 
                date = 1;
                 M = M +1; 
            }
            else { 
                date = D + 1;
                 }
        }

   
        else if (M == 8) {
            if (D == 31) {
                date = 1; 
            M = M +1; 
            }
            else { 
                date = D + 1;
            }
        }

    
        else if (M == 9) {
            if (D == 30) { 
                date = 1;
                 M = M +1; 
            }
            else { 
                date = D + 1; 
                 }
        }


        else if (M == 10) {
            if (D == 31) { 
                date = 1;
               M = M +1; 
            }
            else { 
                date = D + 1;
            }
        }
        


        else if (M == 11) {
            if (D == 30) {
                date = 1;
                  M = M +1; 
            }
            else { 
                date = D + 1; 
                 }
        }

     
        else {
            if (D == 31) { 
                date = 1;
                M = 1; 
                Y++;
            }
            else {
                date = D + 1; 
            }
        }
    }

   
    else {

        if (M == 1) {
            if (D == 31) { 
                date = 1;
                M = M +1; 
            }
            else { 
                date = D + 1;
            }
        }
        else if (M == 2) {
            if (D == 28) {
                date = 1;
                 M = M +1; 
            }
            else { date = D + 1; }
        }
        else if (M == 3) {
            if (D == 31) {
                date = 1;
                 M = M +1; 
            }
            else { 
                date = D + 1; 
            }
        }
        else if (M == 4) {
            if (D == 30) { 
                date = 1;
              M = M +1; 
            }
            else {
                date = D + 1;
            }
        }
        else if (M == 5) {
            if (D == 31) {
                date = 1; 
                M = M +1; 
            }
            else {
                date = D + 1;
            }
        }
        else if (M == 6) {
            if (D == 30) { 
                date = 1; 
                M = M +1; 
            }
            else { 
                date = D + 1; 
            }
        }
        else if (M == 7) {
            if (D == 31) {
                date = 1;
                M = M +1; 
            }
            else { 
                date = D + 1; 
            }
        }
        else if (M == 8) {
            if (D == 31) {
                date = 1; 
                M = M +1; 
            }
            else { 
                date = D + 1;
            }
        }
        else if (M == 9) {
            if (D == 30) { 
                date = 1; 
                M = M +1; 
            }
            else { 
                date = D + 1; 
            }
        }
        else if (M == 10) {
            if (D == 31) {
                date = 1; 
                 M = M +1;  
            }
            else { 
                date = D + 1;
            }
        }
        else if (M == 11) {
            if (D == 30) { 
                date = 1;
                M = M +1; 
            }
            else { 
                date = D + 1;
            }
        }
        else {
            if (D == 31) { 
                date = 1;
                M = 1; 
                Y++;
            }
            else { 
                date = D + 1;
                 }
        }
    }

    printf("%02d-%02d-%d", date, M, Y);
    return 0;
}
