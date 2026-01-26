#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("%.10f\n", sum / n);
    return 0;
}
