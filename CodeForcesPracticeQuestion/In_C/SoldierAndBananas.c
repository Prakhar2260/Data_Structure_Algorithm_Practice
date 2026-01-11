#include <stdio.h>

int main() {
    long long k, n, w;
    scanf("%lld %lld %lld", &k, &n, &w);

    long long totalCost = k * w * (w + 1) / 2;

    if (totalCost > n)
        printf("%lld\n", totalCost - n);
    else
        printf("0\n");

    return 0;
}
