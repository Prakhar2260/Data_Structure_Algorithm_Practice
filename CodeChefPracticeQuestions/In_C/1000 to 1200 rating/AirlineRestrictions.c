#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int A, B, C, D, E;
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

        int ok = 0;

        // Case 1: carry A, check-in B + C
        if (A <= E && B + C <= D) ok = 1;

        // Case 2: carry B, check-in A + C
        if (B <= E && A + C <= D) ok = 1;

        // Case 3: carry C, check-in A + B
        if (C <= E && A + B <= D) ok = 1;

        if (ok) 
            printf("YES\n");
        else 
            printf("NO\n");
    }
    
    return 0;
}
