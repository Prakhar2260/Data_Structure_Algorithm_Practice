#include <stdio.h>

int main() 
{
	// your code goes here
	
	 int T;
    scanf("%d",&T);

    while(T--)
    {
        long long X1,X2;
        scanf("%lld %lld", &X1, &X2);

        if(X1 >= X2)
            printf("YES\n");
            
        else
            printf("NO\n");
    }

    return 0;
}



