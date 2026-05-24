#include <stdio.h>

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);

    int required=N/2+1;
    int ans=required-K;

    if(ans<0)
        ans=0;

    printf("%d\n", ans);

    return 0;
}
