#include <stdio.h>

int main()
{
	// your code goes here
	
	int N;
	scanf("%d",&N);
	
	long long arr[N];
	for(int i=0;i<N;i++)
	 scanf("%lld",&arr[i]);
	
	long long sum=0;
	
	long long s=0;
	for(int i=1;i<=N;i++)
	 {
	     s=s+arr[i-1];
	     sum=sum+i;
	 }
	 
	 if(sum==s)
	  {
	      printf("YES\n");
	  }
	  
	  else
	  printf("NO\n");
	
     return 0;
}

