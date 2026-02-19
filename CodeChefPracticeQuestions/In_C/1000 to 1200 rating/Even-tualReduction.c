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
	   
	   int c=1;
	   
	   int freq[26];
	   for(int i=0;i<26;i++)
	   {
	     freq[i]=0;    
	   }
	   
	   for(int i=0;i<N;i++)
	     {
	        freq[str[i]-'a']++; 
	     }
	     
	     for(int i=0;i<26;i++)
	      {
	          if(freq[i]%2 != 0)
	           {
	             c=0;
	             break;
	           }
	      }
	      
	      if(c)
	       {
	           printf("YES\n");
	       }
	       
	       else
	       {
	           printf("NO\n");
	       }
	    
	}
	
	return 0;

}

