#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	   long long n,x,y;
	   scanf("%lld %lld %lld",&n,&x,&y);
	    
	    if(x<n)
        {
            printf("NO\n");
            continue;
        }
	    
	    
	    long long mink=2*n-x;   
        long long maxk=y/3;     

        

        if(mink<0)
          mink=0;   

        if(mink<=maxk)
            printf("YES\n");
            
        else
            printf("NO\n");
	}
	
	return 0;

}

