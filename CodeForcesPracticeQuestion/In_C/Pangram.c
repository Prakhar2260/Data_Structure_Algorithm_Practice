#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[105];
    scanf("%s", s);

    int seen[26] = {0};

    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);   // convert to lowercase
        seen[c - 'a'] = 1;
    }

    // check if all letters are present
    for (int i = 0; i < 26; i++) {
        if (seen[i] == 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
