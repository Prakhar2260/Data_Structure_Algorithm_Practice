#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    char str[n+1];
	    scanf("%s",str);
	    
	    int len=strlen(str);
	    
	    int start=0;
	    int end=0;
	    
	    for(int i=0;str[i]!='\0';i++)
	     {
	         if(str[i]=='B')
	         {
	             start=i;
	             break;
	         }
	     }
	     
	     
	    for(int i=len-1;i>=0;i--)
	     {
	         if(str[i]=='B')
	         {
	             end=i;
	             break;
	         }
	     }
	     
	     if(start==end)
	      {
	          printf("1\n");
	      }
	      
	      else
	      {
	          printf("%d\n",end-start+1);
	      }
	}
	
	return 0;

}

