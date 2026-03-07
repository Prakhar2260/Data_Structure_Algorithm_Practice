#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int n;
	   scanf("%d",&n);
	   
	   char st1[n+1];
	   char st2[n+1];
	   
	   scanf("%s",st1);
	   scanf("%s",st2);
	   
	   bool used[26]={0};

        for(int i=0;i<n;i++)
        {
            if(st1[i]!=st2[i])
                used[st2[i]-'a']=true;
        }

        int ans=0;

        for(int i=0;i<26;i++)
            if(used[i]) 
               ans++;
	    
	    printf("%d\n",ans);
	}
	
	return 0;

}

