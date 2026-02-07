#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int N;
        scanf("%d", &N);

        int arr[N];
        
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        int flag=1; 

        for(int i = 1; i < N; i++)
        {
            if(arr[i]<arr[i-1])
            {
                flag=0;
                break;
            }
        }

        if(flag)
            printf("Yes\n");
            
        else
            printf("No\n");
    }

    return 0;
        
    }

