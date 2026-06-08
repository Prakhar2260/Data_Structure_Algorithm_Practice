#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int w,h;
	    long long n;
	    
	    scanf("%d %d %lld",&w,&h,&n);
	    
	    long long pieces=1;
	    
	    while(w%2==0)
	    {
	        pieces*=2;
	        w=w/2;
	    }
	    
	    while(h%2==0)
	    {
	        pieces*=2;
	        h=h/2;
	    }
	    
	    if(pieces>=n)
	     printf("YES\n");
	     
	    else
	     printf("NO\n");
	}
	
	return 0;

}

