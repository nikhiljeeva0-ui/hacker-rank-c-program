#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
   
    scanf("%d %d %d", &a, &b, &c);

  double  D = b * b - 4.0 * a * c;

    if (D > 0) {
        double x = (-b + sqrt(D)) / (2.0 * a);
        double y = (-b - sqrt(D)) / (2.0 * a);

        printf("Roots: %.2f, %.2f\n", x, y);
        printf("Type: Real and Distinct");
    }
    else if (D == 0) {
        double x = -b / (2.0 * a);

        printf("Roots: %.2f, %.2f\n", x, x);
        printf("Type: Real and Equal");
    }
    else {
         double rP = -b / (2.0 * a);
       double IP = sqrt(-D) / (2.0 * a);

        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",
               rP, IP, rP, IP);
        printf("Type: Complex");
    }

    return 0;
}