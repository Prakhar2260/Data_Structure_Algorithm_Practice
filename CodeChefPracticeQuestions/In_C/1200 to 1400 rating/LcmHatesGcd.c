#include <stdio.h>

int gcd(int a, int b) 
{
    while (b != 0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   long A,B;
	   scanf("%ld %ld",&A,&B);
	    
	         long x = gcd(A,B);
	         long k = gcd(A,x);
	         long m = gcd(B,x);
	         long lcm = (A*x)/k;
	         
	     
	     
	     printf("%ld\n",lcm - m);
	   
	}
	
	return 0;

}

