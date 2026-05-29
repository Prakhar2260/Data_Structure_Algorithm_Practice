#include <stdio.h>

int main() 
{
	// your code goes here
	
	int tc;
	scanf("%d",&tc);
	
	while(tc--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    
	    int totalData=0;
	    for(int i=0;i<n;i++)
	     {
	         int t,d;
	         scanf("%d %d",&t,&d);
	         
	         
	         if(k>=t)
               {
                k=k-t;
               }
               
                  else
                   {
                    totalData=totalData+(t-k)*d;
                     k=0;
                     }
	     }
	     
	     printf("%d\n", totalData);
	}
	
	return 0;

}

