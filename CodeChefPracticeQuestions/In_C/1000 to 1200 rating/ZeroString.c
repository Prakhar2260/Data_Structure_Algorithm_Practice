#include <stdio.h>

int ManyZeroes(char *p,int n)
 {
     int zero=0;
    for(int i=0;i<n;i++)
     {
        if(p[i]=='0')
         {
            zero++; 
         }
     }
     
     return zero;
 }
 
 
int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int N;
	   scanf("%d",&N);
	   
	   char S[N+1];
	   scanf("%s",&S);
	   
	   int zeroes=ManyZeroes(S,N);
	   int ones=N-zeroes;
	   
	   int operations=ones;
	   
	     if(1+zeroes<operations)
	      {
            operations=1+zeroes;
	      }    
	   
	    printf("%d\n",operations);
	}
	
	return 0;

}

