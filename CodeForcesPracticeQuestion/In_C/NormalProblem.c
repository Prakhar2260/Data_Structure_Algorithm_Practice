#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    char str1[101];
	    scanf("%s",str1);
	    
	    int len=strlen(str1);
	    char str2[101];
	    
	    int i=0;
	    for(int j=len-1;j>=0;j--)
	     {
	         if(str1[j]=='p')
	          {
	              str2[i++]='q';
	          }
	          
	          else if(str1[j]=='q')
	           {
	               str2[i++]='p';
	           }
	           
	           else
	           {
	               str2[i++]='w';
	           }
	     }
	     
	     str2[i]='\0';
	     
	     printf("%s\n",str2);
	}
	
	return 0;;

}

