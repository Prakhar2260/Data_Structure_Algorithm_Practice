#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 5)
        printf("%d\n",N*85);
    else
        printf("%d\n",N*100);

    return 0;
}
