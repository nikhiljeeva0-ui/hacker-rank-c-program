#include <stdio.h>

int main() {

    int budget, guest, food, dec, music, extra;
    scanf("%d", &budget);
    scanf("%d", &guest);
    scanf("%d", &food);
    scanf("%d", &dec);
    scanf("%d", &music);
    scanf("%d", &extra);

    int totalFoodCost = guest * food;
    int totalCost = totalFoodCost + dec + music + extra;

    if (totalCost <= budget &&guest > 5 && guest <= 50 &&(dec < 0.30 * budget || totalFoodCost < 0.50 * budget) &&
        (guest <= 25 || music > 0)){
        printf("Celebration Approved");
    } else {
        printf("Celebration Denied");
    }

    return 0;
}
