#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    char str[51];
	    scanf("%s",str);
	    
	    int freq[26];
	    
	    for(int i=0;i<26;i++)
	     {
	         freq[i]=0;
	     }
	     
	     for(int i=0;str[i]!='\0';i++)
	      {
	          freq[str[i]-'a']++;
	      }
	      
	      int sum=0;
	      
	      for(int i=0;i<26;i++)
	       {
	           if(freq[i]!=0)
	           sum=sum+freq[i];
	       }
	       
	       int c=0;
	       
	       for(int i=0;i<26;i++)
	        {
	            if(freq[i]!=0 && sum-freq[i] == freq[i])
	             {
	                 c=1;
	                 break;
	             }
	        }
	        
	        if(c==1)
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

