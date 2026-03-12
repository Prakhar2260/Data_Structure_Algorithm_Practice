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
	    
	    int freq[26];
	    
	    for(int i=0;i<26;i++)
	     {
	         freq[i]=0;
	     }
	     
	     for(int i=0;i<N;i++)
	     {
	         freq[str[i]-'a']++;
	     }
	     
	     int pos=0;
	     
	     for(int i=0;i<26;i++)
	     {
	        if(freq[i]>1)
	          {
	              pos=1;
	          }
	     }
	     
	     if(pos==0)
	      {
	          printf("-1\n");
	          continue;
	      }
	      
	     printf("%d\n",N-2);
	}
	
	return 0;

}

