#include <stdio.h>

int cmp(const void *a,const void *b)
 {
     return (*(int*)a - *(int*)b);
 }



int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int n,x,c;
	   scanf("%d %d %d",&n,&x,&c);
	   
	   int array[n];
	   for(int i=0;i<n;i++)
	     scanf("%d",&array[i]);
	     
	    int sum=0;
	    for(int i=0;i<n;i++)
	     sum=sum+array[i];
	     
	     int max=sum;
	     int cost=0;
	     
	     qsort(array,n,sizeof(int),cmp);
	     
	     int i=0;
	     while(i<n)
	     {
	         sum=sum-array[i];
	         
	         array[i]=x;
	         cost=cost+c;
	         
	         sum=sum+array[i];
	           
	         int val=sum-cost;
	         
	         if(val>max)
	          max=val;
	          
	          i++;
	         
	      }
	      
	      printf("%d\n",max);
	     
	}
	
	return 0;

}

