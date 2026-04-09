#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long x, y, n;
        scanf("%lld %lld %lld", &x, &y, &n);

        long long k = n - ( (n - y) % x );

        printf("%lld\n", k);
    }

    return 0;
}
