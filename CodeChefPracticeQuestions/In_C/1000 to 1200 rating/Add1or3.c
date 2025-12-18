#include <stdio.h>

int main() {
	// your code goes here
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long N,M;
        
        scanf("%lld %lld",&N,&M);

        if (M < N) 
        {
            printf("NO\n");
        }
        
        
        else if ((M - N) % 2 != 0)
        {
            printf("NO\n");
        } 
        
        else
        {
            long long b = (M - N) / 2;
            
            
            
            if (b <= N)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}



