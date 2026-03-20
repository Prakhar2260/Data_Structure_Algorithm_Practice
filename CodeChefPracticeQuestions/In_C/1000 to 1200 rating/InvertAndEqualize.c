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
	    
	    char str[N+1];
	    scanf("%s",str);
	    
	    int count1=0;
	    int count0=0;
	    
	    if(str[0]=='1')
	     {
	        count1++; 
	     }
	     
	     else
	      count0++;
	      
	    for(int i=1;i<N;i++)
	     {
	         if(str[i]!=str[i-1])
	          {
	             if(str[i]=='0')
	              count0++;
	              
	             else
	              count1++;
	          }
	     }
	     
	     if(count1<=count0)
	      {
	        printf("%d\n",count1);
	      }
	      
	      else
	       printf("%d\n",count0);
	       
	    
	}
	
	return 0;

}

