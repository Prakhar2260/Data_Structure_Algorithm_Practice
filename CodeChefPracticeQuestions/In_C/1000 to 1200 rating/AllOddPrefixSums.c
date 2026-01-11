#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int oddCount = 0;
        
        for (int i = 0; i < N; i++)
        {
            int x;
            scanf("%d",&x);
            
            if (x%2 ==1)
                oddCount++;
        }

        if (oddCount == 1)
            printf("Yes\n");
            
        else
            printf("No\n");
    }

    return 0;
}
