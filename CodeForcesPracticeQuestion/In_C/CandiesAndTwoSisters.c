#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        long long n;
        scanf("%lld",&n);

        long long answer =(n-1)/2;
        printf("%lld\n", answer);
    }

    return 0;
}
