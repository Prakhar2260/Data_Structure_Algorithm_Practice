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
	   
	   int fruit[N];
	   int nutrient[N];
	   
	   for(int i=0;i<N;i++)
	   {
	       scanf("%d",&fruit[i]);
	   }
	   
	   for(int i=0;i<N;i++)
	   {
	       scanf("%d",&nutrient[i]);
	   }
	   
	   int sum=0;
	   
	   for(int i=1;i<=N;i++)
	    {
	        int val=0;
	        
	        for(int j=0;j<N;j++)
	         {
	             if(fruit[j]==i && nutrient[j]>0)
	              {
	                  if(nutrient[j]>val)
	                   {
	                       val=nutrient[j];
	                   }
	              }
	         }
	         
	         sum=sum+val;
	    }
	    
	    printf("%d\n",sum);
	   
	}
	
	return 0;

}

