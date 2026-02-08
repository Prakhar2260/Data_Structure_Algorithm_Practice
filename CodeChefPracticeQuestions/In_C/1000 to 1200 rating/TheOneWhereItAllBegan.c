#include <stdio.h>


int main() 
{
	// your code goes here
	 int T, N;
    scanf("%d", &T);

    while (T--) 
    {
        scanf("%d",&N);

        if (N >= 21)
            printf("YES\n");
            
        else
            printf("NO\n");
    }

    return 0;

}

