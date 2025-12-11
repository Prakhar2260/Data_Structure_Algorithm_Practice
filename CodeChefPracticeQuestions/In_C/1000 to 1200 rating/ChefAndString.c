#include <stdio.h>

int main()
{
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   char S[100005];
	   scanf("%s",&S);
	   
	   int N=strlen(S);
	   
	   int count=0;
	   
	   for(int i=0 ;i< N-1 ;i++)
	    {
	        
	     if((S[i]=='x' && S[i+1]=='y')||(S[i]=='y' && S[i+1]=='x'))
	      {
	        count++;
	        i++;
	      }
	     }
	     printf("%d\n",count);
     }
     
     return 0;
     
}

