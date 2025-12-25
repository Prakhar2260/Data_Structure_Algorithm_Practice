#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    char S[100001];
	    scanf("%s",S);
	    
	    
	    for(int i=0;i<100000;i++)
	     {
	       if(S[i]=='>')
	        S[i]='<';
	        
	        else if(S[i]=='<')
	        S[i]='>';
	        
	        else
	        continue;
	     }
	     
	     int pairs=0;
	     
	     for(int i=1;i<100000-1;i++)
	     {
	       if(S[i-1]=='>' && S[i]=='<')
	       {
	         pairs++;
	         i++;
	       }
	       
	     }
	     
	     printf("%d\n",pairs);
	}
	
	return 0;

}

