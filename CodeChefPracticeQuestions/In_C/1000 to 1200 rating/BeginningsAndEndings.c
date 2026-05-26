#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int arr[N];
	    for(int i=0;i<N;i++)
	     scanf("%d",&arr[i]);
	     
	     int freq[101];
	     
	     for(int i=0;i<N;i++)
	      {
	          freq[i]=0;
	      }
	      
	       for(int i=0;i<N;i++)
	       {
	          freq[arr[i]]++;
	       }
	       
	       int allzero=1;
	       for(int i=0;i<101;i++)
	       {
	         if(freq[i]>=2)
	          {
	              allzero=0;
	              break;
	          }
	       }
	       
	       if(allzero==1)
	        {
	            printf("-1\n");
	            continue;
	        }
	   
	     int moves=101;
	    
	     for(int i=0;i<N;i++)
	     {
	           int curr=arr[i];
	           int j=N-1;
	           
	           while(j>i)
	           {
	             if(curr==arr[j])
	             {
	               int NewMoves=i+N-1-j;
	               
	               if(moves>NewMoves)
	                {
	                    moves=NewMoves;
	                }
	             }
	           
	             j--;
	           }
	     }
	     
	     printf("%d\n",moves);
	     
	}
	
	return 0;

}

