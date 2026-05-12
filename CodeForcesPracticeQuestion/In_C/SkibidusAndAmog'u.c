#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    char str[15];
	    scanf("%s",str);
	    
	    int len=strlen(str);
	    
	    char s[15];
	    int index=0;
	    
	    for(int i=0;i<len-2;i++)
	     {
	         s[index++]=str[i];
	     }
	     
	     s[index++]='i';
	     s[index]='\0';
	     
	     printf("%s\n",s);
	    
	    
	}
	
	return 0;

}

