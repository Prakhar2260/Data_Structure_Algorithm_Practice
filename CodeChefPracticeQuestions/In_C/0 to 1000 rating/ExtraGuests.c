#include <stdio.h>

int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);

    int cost=X*100+(Y-X)*150;
    printf("%d\n",cost);

    return 0;
}
