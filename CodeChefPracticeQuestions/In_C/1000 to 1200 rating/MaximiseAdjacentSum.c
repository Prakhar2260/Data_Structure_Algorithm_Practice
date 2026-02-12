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
	   
	  int min1=100001,min2=100001;
	  int index1=0,index2=0;
	  
	  for(int i=0;i<N;i++)
	   {
	     if(min1>array[i])
	     {
	         
	       min1=array[i];
	       index1=i;
	     }
	   }
	   	  
	  for(int i=0;i<N;i++)
	   {
	     if(i!=index1 && min2>array[i])
	     {
	         
	       min2=array[i];
	       index2=i;
	     }
	   }
	   
	  long long sum=0;
	  
	  for(int i=0;i<N;i++)
	   {
	       if(i!=index1 && i!=index2)
	       {
	        sum=sum+array[i];    
	       }
	   }
	   
	   long long ans=sum*2 + min1+min2;
	    
	  printf("%lld\n", ans);  
	    
	    
	}
	
	return 0;

}

