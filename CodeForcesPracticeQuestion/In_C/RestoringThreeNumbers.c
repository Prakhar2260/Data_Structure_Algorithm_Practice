#include <stdio.h>

int main()
{
    long long x1,x2,x3,x4;
    scanf("%lld %lld %lld %lld", &x1, &x2, &x3, &x4);

    long long max=x1;

    if(x2>max)
    max=x2;
    
    if(x3>max)
    max=x3;
    
    if(x4>max)
    max=x4;

    if(x1!=max)
    printf("%lld ",max-x1);
    
    if(x2!=max)
    printf("%lld ",max-x2);
    
    if(x3!=max)
    printf("%lld ",max-x3);
    
    if(x4!=max)
    printf("%lld ",max-x4);

    return 0;
}
