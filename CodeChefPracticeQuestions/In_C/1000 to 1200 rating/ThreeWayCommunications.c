#include <stdio.h>
#include <math.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int r;
	    scanf("%d",&r);
	    
	    int x1,y1;
	    scanf("%d %d",&x1,&y1);
	    int x2,y2;
	    scanf("%d %d",&x2,&y2);
	    int x3,y3;
	    scanf("%d %d",&x3,&y3);
	    
	    long long s1=x1-x2;
	    long long h1=y1-y2;
	    
	    long long s2=x2-x3;
	    long long h2=y2-y3;
	    
	    long long s3=x3-x1;
	    long long h3=y3-y1;
	    
	    
	    
	    long long d1,d2,d3;
	    
	    d1=s1*s1+h1*h1;
	     d2=s2*s2+h2*h2;
	      d3=s3*s3+h3*h3;
	    
	    
	     int count=0;

        if(d1<=r*r)
        count++;
        
        if(d2<=r*r) 
        count++;
        
        if(d3<=r*r)
        count++;
	    
	    if(count>=2)
	     {
	         printf("yes\n");
	     }
	     
	     else
	      printf("no\n");
	    
	}
	
	return 0;

}

