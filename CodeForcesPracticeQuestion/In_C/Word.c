#include <stdio.h>
#include <ctype.h>

int main() {
    char s[105];
    scanf("%s", s);

    int upper = 0, lower = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (upper > lower)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }

    printf("%s\n", s);
    return 0;
}
