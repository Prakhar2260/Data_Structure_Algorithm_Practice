#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, M;
        scanf("%d %d", &N, &M);

        printf("%d\n", (N - 1) * (M - 1));
    }

    return 0;
}
