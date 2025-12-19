
#include <stdio.h>

int main()
{
	// your code goes here
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int N, M;
        scanf("%d %d", &N, &M);

        int rows = (N + 1) / 2;
        int seats = (M + 1) / 2;

        printf("%d\n", rows * seats);
    }

    return 0;
}




