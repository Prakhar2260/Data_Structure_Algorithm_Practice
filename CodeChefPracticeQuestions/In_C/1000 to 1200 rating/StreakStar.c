#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N,X;
	    scanf("%d %d",&N,&X);
	    
	    int ar[N];
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d",&ar[i]);
	    }
	    
	    int IsAscending=1;
	    for(int i=1;i<N;i++)
	     {
	         if(ar[i]<ar[i-1])
	          {
	              IsAscending=0;
	          }
	     }
	     
	     if(IsAscending==1)
	      {
	          printf("%d\n",N);
	          continue;
	      }
	      
	      int streak = 1;
        int currentStreak=1;
        for(int i=1;i<N;i++)
        {
            if(ar[i]>=ar[i-1])
                currentStreak++;
                
            else
              {
                if(streak<currentStreak)
                    streak=currentStreak;
                    
                  currentStreak=1;
              }
        }
        
        if(streak<currentStreak)
            streak=currentStreak;
	    
	    int val=0;
	    
	    for(int j=0;j<N;j++)
	     {
	         val=ar[j];
	         
	         ar[j]=ar[j]*X;
	         
	         int currentStreak=1;
	         for(int i=1;i<N;i++)
	          {
	              if(ar[i]>=ar[i-1])
	               {
	                   currentStreak++;
	               }
	               
	               else
	               {
	                   if(streak<currentStreak)
	                    {
	                        streak=currentStreak;
	                    }
	                    
	                    currentStreak=1;
	               }
	          }
	          
	          if(streak<currentStreak)
	                    {
	                        streak=currentStreak;
	                    }
	                    
	           ar[j]=val;         
	     }
	     
	     printf("%d\n",streak);
	}
	
	return 0;

}

