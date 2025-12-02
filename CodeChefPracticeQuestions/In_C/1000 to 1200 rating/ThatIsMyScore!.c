#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int score[9] = {0}; // index 1 to 8 used

        while(N--) {
            int p, s;
            scanf("%d %d", &p, &s);
            if(p >= 1 && p <= 8) {
                if(score[p] < s)
                    score[p] = s;
            }
        }

        int total = 0;
        for(int i = 1; i <= 8; i++)
            total += score[i];

        printf("%d\n", total);
    }
    return 0;
}
