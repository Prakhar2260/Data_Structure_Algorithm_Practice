#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N,B;
	  scanf("%d %d",&N,&B);
	  
	  int breadth=N;
	  
	  int ar[N][3];
	  
	  for(int i=0;i<N;i++)
	   {
	        scanf("%d %d %d\n",&ar[i][0],&ar[i][1],&ar[i][2]);    
	   }
	   
	   int maxarea=0;
	   
	   for(int i=0;i<N;i++)
	     {
	       if(ar[i][2]<=B)
	       {
	       int area=ar[i][0] * ar[i][1];
	       
	       if(maxarea<area)
	         maxarea=area;
	         
	       }
	     }
	     
	     if(maxarea==0)
	       printf("no tablet\n");
	       
	     else
	       printf("%d\n",maxarea);
	}

  return 0;
}

