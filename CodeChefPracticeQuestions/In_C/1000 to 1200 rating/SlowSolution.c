#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int maxt,maxn,maxsum;
	  scanf("%d %d %d",&maxt,&maxn,&maxsum);
	  
	  long long sqsum=0;
	 
	  for(int i=1;i<=maxt && maxsum!=0 ;i++)
	   {
	       
	       int choice=0;
	       
	    for(int j=maxn;j>=0;j--)
	     {
	      if(j<=maxsum)
	       {
	        choice=j;
	        maxsum=maxsum-j;
	        break;
	       }
	     }
	     
	     sqsum=sqsum+choice*choice;
	   } 
	    
	   printf("%lld\n",sqsum); 
	    
	}
	
	return 0;

}

