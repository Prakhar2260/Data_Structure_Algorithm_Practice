#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int min = a, max = a;

        if(b<min)
        min=b;
        
        if(c<min)
        min=c;

        if(b>max)
        max=b;
        
        if(c>max)
        max=c;

        int medium=a+b+c-min-max;

        printf("%d\n", medium);
    }

    return 0;
}
