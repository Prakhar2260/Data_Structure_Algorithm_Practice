#include <stdio.h>

int main()
{
	// your code goes here
	
	int n;
	scanf("%d",&n);
	
	int ar[n];
	for(int i=0;i<n;i++)
	 scanf("%d",&ar[i]);
	 
	 int len=1;
	 int c=1;
	 
	 for(int i=1;i<n;i++)
	  {
	      if(ar[i-1]<ar[i])
	       c++;
	       
	       else
	       {
	           if(len<c)
	            {
	                len=c;
	            }
	            
	            c=1;
	       }
	  }
	  
	   if(c>len)
        len=c;

	  
	  printf("%d\n",len);

      return 0;
}

