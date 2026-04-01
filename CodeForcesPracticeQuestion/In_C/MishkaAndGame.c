#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	int mish=0;
	int chris=0;
	
	while(T--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    
	    if(x<y)
	     chris++;
	     
	    else if(x>y)
	    mish++;
	    
	    else
	     continue;
	}
	
	if(mish==chris)
	 {
	     printf("Friendship is magic!^^\n");
	 }
	 
	 else if(mish>chris)
	 printf("Mishka\n");
	 
	 else
	 printf("Chris\n");

    return 0;
}

