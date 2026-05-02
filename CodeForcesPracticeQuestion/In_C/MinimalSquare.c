#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }

        int side;

        if(2*a>=b)
            side=2*a;
            
        else
            side=b;

        printf("%d\n",side*side);
    }

    return 0;
}
