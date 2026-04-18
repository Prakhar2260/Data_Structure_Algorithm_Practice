#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int N;
        scanf("%d",&N);

        int countOdd=0,hasOne=0;

        for(int i=0;i<N;i++)
        {
            int x;
            scanf("%d",&x);

            if(x%2!=0)
            countOdd++;
            
            if(x==1)
            hasOne=1;
        }

        if(hasOne)
            printf("CHEF\n");
            
        else if(countOdd % 2 != 0)
            printf("CHEF\n");
            
        else
            printf("CHEFINA\n");
    }

    return 0;
}
