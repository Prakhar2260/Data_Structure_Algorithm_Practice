#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n<=1)
    return 0;

    for (int i=2;i<=sqrt(n);i++)
    {
        if(n % i==0)
            return 0;
    }
    return 1;
}



int main() 
{
	// your code goes here
	
	int N,M;
	scanf("%d %d",&N,&M);
	
	N=N+1;
	
	while(1)
	{
	if(isPrime(N))
	 {
	    break;
	 }
	 N=N+1;
	} 
	 
	  if(N==M)
	  printf("YES\n");
	  
	  else
	  printf("NO\n");
	  
	  return 0;

}

