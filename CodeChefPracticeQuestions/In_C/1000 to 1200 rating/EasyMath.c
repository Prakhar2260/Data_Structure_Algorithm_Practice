#include <stdio.h>

int digitSum(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x % 10;
        x/=10;
    }
    return sum;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[105];
        for(int i=0;i<N;i++)
            scanf("%d",&A[i]);

        int ans=0;

        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                int product=A[i]*A[j];
                int sum=digitSum(product);

                if(sum>ans)
                    ans=sum;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
