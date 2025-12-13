#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[105];
        scanf("%s", s);

        int holes = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'B')
                holes += 2;
            else if (s[i] == 'A' || s[i] == 'D' || s[i] == 'O' ||
                     s[i] == 'P' || s[i] == 'Q' || s[i] == 'R')
                holes += 1;
        }

        printf("%d\n", holes);
    }

    return 0;
}
