#include <stdio.h>
# include <stdlib.h>

int cmp(const void *a,const void *b)
{
  return (*(int*)a-*(int*)b);    
}

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
	     
	   int k;
	   scanf("%d",&k);
	   
	   int ele=ar[k-1];
	   
	   qsort(ar,N,sizeof(int),cmp);
	   
	   for(int i=0;i<N;i++)
	     {
	      if(ar[i]==ele)
	       printf("%d\n",i+1);
	      
	     }
	 }
	 return 0;
}

