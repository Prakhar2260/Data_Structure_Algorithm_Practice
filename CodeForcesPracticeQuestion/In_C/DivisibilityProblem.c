#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long r = a % b;
        long long moves = (b - r) % b;

        printf("%lld\n", moves);
    }

    return 0;
}
