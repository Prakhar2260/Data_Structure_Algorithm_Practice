#include <stdio.h>

int digitSum(long long num)
{
    int sum=0;
    
    while(num>0)
     {
        long long rem=num%10;
        sum=sum+rem;
        num=num/10;
     }
     
     return sum;
}


int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  long long N;
	  scanf("%lld",&N);
	  
	  int digisum=digitSum(N);
	  
	  long long num1=N;
	  
	  while(1)
	  {
	     num1=num1+1; 
	     int dsum=digitSum(num1);
	     
	     if((digisum%2==0 && dsum%2!=0) || (digisum%2!=0 && dsum%2==0))
	       {
	       break;    
	       }
	     
	  }
	    
	   printf("%d\n",num1); 
	}
	
	return 0;

}

