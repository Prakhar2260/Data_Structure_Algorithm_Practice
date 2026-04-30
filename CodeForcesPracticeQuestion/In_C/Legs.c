#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int animals=(n+3)/4; 
        printf("%d\n",animals);
    }

    return 0;
}
