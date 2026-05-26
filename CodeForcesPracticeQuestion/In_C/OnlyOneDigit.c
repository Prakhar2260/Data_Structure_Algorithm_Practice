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
	    
	    int num=n;
	    
	    int min=n;
	    
	    while(num>0)
	    {
	        int rem=num%10;
	        if(rem<min)
	         {
	             min=rem;
	         }
	         
	         num=num/10;
	    }
	    
	    printf("%d\n",min);
	}
	
	return 0;

}

