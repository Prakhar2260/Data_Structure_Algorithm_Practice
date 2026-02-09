#include <stdio.h>

int main() 
{
	// your code goes here
	 int T;
    scanf("%d",&T);

    while(T--)
    {
        int N;
        scanf("%d",&N);

        int count=0;

        while(N>0)
        {
            int s=(int)sqrt(N);
            N = N- s*s;
            count++;
        }

        printf("%d\n",count);
    }

    return 0;

}

