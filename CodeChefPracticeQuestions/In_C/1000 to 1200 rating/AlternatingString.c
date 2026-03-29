#include <stdio.h>

int main() 
{
	// your code goes here
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        char s[100005];
        scanf("%s",s);

        int count0=0,count1=0;

        for (int i=0;i<n;i++)
        {
            if(s[i]=='0')
            count0++;
            
            else
            count1++;
        }

        int ans;
        
        if (count0==count1)
            ans=2*count0;
            
        else
            ans=2*(count0<count1 ? count0 : count1) +1;

        printf("%d\n", ans);
    }
    

    return 0;
}

