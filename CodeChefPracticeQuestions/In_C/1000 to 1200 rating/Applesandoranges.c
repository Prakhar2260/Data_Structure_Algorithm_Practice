#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N, M;
        scanf("%lld %lld", &N, &M);

        printf("%lld\n", gcd(N, M));
    }

    return 0;
}
