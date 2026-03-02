#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int k;
        scanf("%d", &k);

        int a1, b1, a2, b2;
        scanf("%d %d", &a1, &b1);
        scanf("%d %d", &a2, &b2);

        int alice_total = a1 + a2;
        int bob_total = b1 + b2;

        int alice_wins = 0, bob_wins = 0;

        if(a1 > b1)
            alice_wins++;
        else
            bob_wins++;

        if(a2 > b2)
            alice_wins++;
        else
            bob_wins++;

        
        int new_bob_total = bob_total + k;
        int new_alice_total = alice_total;  

        if(new_bob_total > new_alice_total)
            printf("YES\n");
        else if(new_bob_total == new_alice_total && (bob_wins + 1) > alice_wins)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}