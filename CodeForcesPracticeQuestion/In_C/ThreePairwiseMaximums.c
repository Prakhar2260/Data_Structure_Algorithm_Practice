#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	long long x,y,z;
	scanf("%lld %lld %lld",&x,&y,&z);
	
	int big,small;
	
	if(x!=y && y!=z && z!=x)
	 {
	     printf("NO\n");
	     continue;
	 }
	 
	 else if(x==y && y==z)
	 {
	      printf("YES\n");
	      printf("%lld %lld %lld\n",x,x,x);
	      continue;
	 }
	 
	 else if(x>y && z>y && x==z)
	  {
	       printf("YES\n");
	       printf("%lld %lld %lld\n",x,y,y);
	       continue;
	  }
	  
	  else if(y>x && z>x && y==z)
	  {
	       printf("YES\n");
	       printf("%lld %lld %lld\n",y,x,x);
	       continue;
	  }
	  
	  else if(x>z && y>z && x==y)
	  {
	       printf("YES\n");
	       printf("%lld %lld %lld\n",x,z,z);
	       continue;
	  }
	    
	  else
	  {
	      printf("NO\n");
	  }
	  
	}
	
    return 0;
     
}

