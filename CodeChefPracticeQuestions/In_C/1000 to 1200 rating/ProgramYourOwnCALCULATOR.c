#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char line[256];

    // Read first number line
    if (!fgets(line, sizeof(line), stdin)) return 0;
    double A;
    if (sscanf(line, "%lf", &A) != 1) return 0;

    // Read second number line
    if (!fgets(line, sizeof(line), stdin)) return 0;
    double B;
    if (sscanf(line, "%lf", &B) != 1) return 0;

    // Read operator line (may contain spaces)
    if (!fgets(line, sizeof(line), stdin)) return 0;
    char op = 0;
    // try to extract first non-space character (operator)
    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/') {
            op = line[i];
            break;
        }
    }
    if (op == 0) {
        // fallback: try sscanf
        sscanf(line, " %c", &op);
    }

    double result = 0.0;
    switch (op) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            // guard against division by zero (just in case)
            if (B == 0) {
                // depending on judge, but spec says B != 0. Print something safe.
                printf("DivisionByZero\n");
                return 0;
            }
            result = A / B;
            break;
        default:
            // invalid operator
            return 0;
    }

    // Print with 6 decimal places (judge accepts error up to 1e-6)
    printf("%.6f\n", result);
    return 0;
}
