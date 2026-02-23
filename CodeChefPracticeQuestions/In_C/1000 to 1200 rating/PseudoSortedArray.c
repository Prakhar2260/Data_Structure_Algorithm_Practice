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
	    
	    int array[N];
	    for(int i=0;i<N;i++)
	      scanf("%d",&array[i]);
	      
	    for(int i=0;i<N-1;i++)
	     {
	         if(array[i]<=array[i+1])
	         {
	            continue; 
	         }
	         
	         else
	         {
	            int temp=array[i];
	            array[i]=array[i+1];
	            array[i+1]=temp;
	            break;
	         }
	     }
	     
	     int possible=1;
	     
	     for(int i=0;i<N-1;i++)
	     {
	         if(array[i]<=array[i+1])
	         {
	            continue; 
	         }
	         
	         else
	         {
	            possible=0;
	            break;
	         }
	     }
	     
	     if(possible==0)
	      {
	          printf("NO\n");
	      }
	      
	      else
	      {
	          printf("YES\n");
	      }
	
	}
	
	return 0;

}

