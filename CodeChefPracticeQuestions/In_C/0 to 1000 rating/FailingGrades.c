#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	 int N;
	 scanf("%d",&N);
	 
	 int ar[N];
	 for(int i=0;i<N;i++)
	    scanf("%d",&ar[i]);
	    
	  int sum=0; 
	  int c=0;
	 for(int i=0;i<N;i++)
	   {
	    sum=sum+ar[i];      
	    
	    if(sum/(i+1)>=40)
	      {
	        continue;  
	      }
	      
	    else
	      {
	        c=1;
	        break;
	      }
	   }
	   
	   if(c==0)
	    printf("Yes\n");
	    
	   else
	    printf("No\n"); 
	    
	}
 
   return 0;
}

