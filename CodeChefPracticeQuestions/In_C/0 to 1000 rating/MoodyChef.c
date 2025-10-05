#include <stdio.h>

int main() 
{
	// your code goes here
	int T;
	
	scanf("%d",&T);
	while(T--)
	{
	  int N,l,r;
	  scanf("%d %d %d",&N,&l,&r);
	  
	  int ar[N];
	  for(int i=0;i<N;i++)
	    scanf("%d",&ar[i]);
	  
	  int happ=0;
	  int GHap=0;
	  int LHap=0;
	  
	  for(int i=0;i<N;i++)
	    {
	     if(ar[i]>=l && ar[i]<=r)
	       {
	        happ++;        
	        }
	       
	     else
	     {
	      happ--;    
	     }
	     
	     if(happ>GHap)
	       {
	        GHap=happ;        
	       }
	       
	    if(happ<LHap)
	       {
	        LHap=happ;        
	       }
	    }
	    printf("%d %d\n",GHap,LHap);
	}
}

