#include <stdio.h>

int main() {
    //Write your code here
    int T;
    scanf("%d", &T);

    while (T--) {
        long long E, K;
        scanf("%lld %lld", &E, &K);

        int count = 0;

        while (E > 0) {
            count++;
            E /= K;
        }

        printf("%d\n", count);
    }

    return 0;
}
