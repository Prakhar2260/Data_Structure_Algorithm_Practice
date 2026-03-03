#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int different_days=(a<b)?a:b;
    int same_days=(a>b?a-b:b-a)/2;

    printf("%d %d", different_days, same_days);

    return 0;
}
