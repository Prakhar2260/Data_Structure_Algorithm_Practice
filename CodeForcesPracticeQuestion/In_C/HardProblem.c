#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
{	
	
	long long m,a,b,c;
	
	scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
	
	long long total1st=m;
	long long total2nd=m;
	
	long long possible=0;
	
	if(a<=total1st)
	{
	    possible+=a;
	    total1st-=a;
	}
	
	else
	{
	    possible+=(total1st);
	    total1st=0;
	}
	
	if(b<=total2nd)
	{
	    possible+=b;
	    total2nd-=b;
	}
	
	else
	{
	    possible+=(total2nd);
	    total2nd=0;
	}
	
	if(total1st+total2nd >= c)
	 {
	     possible+=c;
	 }
	 
	 else
	 {
	     possible+=total2nd+total1st;
	 }
	 
	 printf("%lld\n",possible);
}

   return 0;
	
}

