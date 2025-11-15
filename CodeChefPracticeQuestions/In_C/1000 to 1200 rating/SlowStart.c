#include <stdio.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        int X, H;
        scanf("%d %d", &X, &H);

        int half = X / 2;         // X is guaranteed even
        int damage = 0;
        int turns = 0;
        // simulate up to 5 slow-start turns
        for (int i = 0; i < 5; ++i) {
            damage += half;
            ++turns;
            if (damage >= H) break;
        }

        if (damage < H) {
            int rem = H - damage;
            // each further turn deals X damage
            int extra = (rem + X - 1) / X; // ceil(rem / X)
            turns += extra;
        }

        printf("%d\n", turns);
    }
    return 0;
}
