#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int Tasty[N];
	    for(int i=0;i<N;i++)
	      scanf("%d",&Tasty[i]);
	      
	    int Sugar[N];
	    for(int i=0;i<N;i++)
	      scanf("%d",&Sugar[i]);  
	      
	     int maxSatisfaction=0;
	     int MaxL=0;
	     
	     for(int i=0;i<N;i++)
	      {
	          if(Sugar[i]>MaxL)
	           {
	               MaxL=Sugar[i];
	           }
	      }
	      
	      int L=1;
	      while(L<=MaxL)
	      {
	          int taste=0;
	         for(int i=0;i<N;i++)
	          {
	              if(Sugar[i]<=L)
	               {
	                   if(Tasty[i]>0)
	                    {
	                       taste=taste+Tasty[i]; 
	                    }
	               }
	          }
	          
	          int CurrentSatisfaction=taste-L;
	          
	          if(CurrentSatisfaction>maxSatisfaction)
	          {
	              maxSatisfaction=CurrentSatisfaction;
	          }
	          
	          L++;
	      }       
	      
	      printf("%d\n",maxSatisfaction);
	      
	}
	
	return 0;

}

