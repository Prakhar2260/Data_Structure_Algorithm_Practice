#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 0;
    char s[5];

    while (n--) {
        scanf("%s", s);

        if (s[0] == '+' || s[1] == '+')
            x++;
        else
            x--;
    }

    printf("%d\n", x);
    return 0;
}
