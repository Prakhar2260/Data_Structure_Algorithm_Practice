#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);

    while(t--) 
    {
        int n;
        scanf("%d",&n);

        int x,count1=0,count2=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x == 1) 
            count1++;
            
            else
            count2++;
        }

        int sum=count1+2*count2;

        if(sum%2!=0) 
        {
            printf("NO\n");
        }
        
        else
        {
            int half=sum/2;
            if(half%2==1 && count1==0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }

    return 0;
}
