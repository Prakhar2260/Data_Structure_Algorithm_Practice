#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    char str[N+1];
	    scanf("%s",str);
	    
	    int oper=0;
	    
	    for(int i=1;i<N;i++)
	     {
	         if(str[i-1]=='1'&& str[i]=='0')
	          {
	              oper++;
	              i++;
	          }
	     }
	      
	      printf("%d\n",oper);
	      
	}
	
	return 0;

}

