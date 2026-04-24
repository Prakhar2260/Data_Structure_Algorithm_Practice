#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int cost[26];
	    
	    for(int i=0;i<26;i++)
	     scanf("%d ",&cost[i]);
	     
	    char str[50001];
	    scanf("%s",str);
	    
	    int len=strlen(str);
	    
	    int freq[26];
	    
	    for(int i=0;i<26;i++)
	     {
	         freq[i]=0;
	     }
	     
	     for(int i=0;i<len;i++)
	     {
	         freq[str[i]-'a']++;
	     }
	     
	     int price=0;
	     
	     for(int i=0;i<26;i++)
	      {
	          
	          if(freq[i]==0)
	           {
	               price=price+cost[i];
	           }
	      }
	      
	      printf("%d\n",price);
	}
	
	return 0;

}

