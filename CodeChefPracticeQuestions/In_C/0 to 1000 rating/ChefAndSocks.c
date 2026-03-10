#include <stdio.h>

int main()
{
    int A, X, Y;
    scanf("%d %d %d", &A, &X, &Y);

    if (X + Y >= A)
        printf("YES");
        
    else
        printf("NO");

    return 0;
}
