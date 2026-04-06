#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    char str[N+1];
	    scanf("%s",str);
	    
	    int len=strlen(str);
	    
	    if(len==5)
	    {
	        int c=0;
	        int T=1,I=1,M=1,U=1,R=1;
	       for(int i=0;str[i]!='\0';i++)
	        {
	            if(str[i]=='T' && T)
	             {
	                 c++;
	                 T=0;
	             }
	             
	             if(str[i]=='i' && I)
	             {
	                 c++;
	                 I=0;
	             }
	             
	             if(str[i]=='m' && M)
	             {
	                 c++;
	                 M=0;
	             }
	             
	             if(str[i]=='u' && U)
	             {
	                 c++;
	                 U=0;
	             }
	             
	             if(str[i]=='r' && R)
	             {
	                 c++;
	                 R=0;
	             }
	        }
	        
	        if(c==5)
	         {
	             printf("YES\n");
	         }
	         
	         else
	         printf("NO\n");
	       
	    }
	    
	    else
	    printf("NO\n");
	    
	}
	
	return 0;

}

