#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--) 
    
    {
        int N;
        scanf("%d", &N);

        int odd = 0;
        
        for (int i = 0; i < N; i++)
        {
            int x;
            scanf("%d", &x);
            if (x % 2 == 1)
            {
                odd++;
            }
        }

        if (odd >= 2 && odd % 2 == 0)
        {
            printf("YES\n");
        }
        
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
