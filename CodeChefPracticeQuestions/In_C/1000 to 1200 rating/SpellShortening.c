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
	    
	    int f=1;
	    
	    for(int i=1;i<n;i++)
	     {
	         if(str[i-1]>str[i])
	          {
	              int j;
	              int len=strlen(str);
	              for(j=i-1;j<len;j++)
	               {
	                   str[j]=str[j+1];
	               }
	               
	               str[j]="\0";
	               
	               f=0;
	               break;
	          }
	     }
	     
	     if(f)
	     {
	         str[n-1]='\0';
	     }
	     
	     printf("%s\n",str);
	}
	
	return 0;
	

}

