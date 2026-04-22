#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a, mn = 1e9, mx = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a < mn) mn = a;
            if (a > mx) mx = a;
        }

        printf("%d\n", mx - mn);
    }

    return 0;
}
