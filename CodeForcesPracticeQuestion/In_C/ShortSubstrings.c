#include <stdio.h>

int main() 
{
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    char str[101];
	    scanf("%s",str);
	    
	    int len=strlen(str);
	    
	    char st[len+1];
	    
	    int index=0;
	    
	    for(int i=0;i<len;i++)
	     {
	         if(i==0 || i==len-1)
	          {
	              st[index++]=str[i];
	          }
	          
	          else
	           {
	               st[index++]=str[i];
	               i++;
	           }
	     }
	     
	     st[index]='\0';
	     
	     printf("%s\n",st);
	}
	
	return 0;
}

