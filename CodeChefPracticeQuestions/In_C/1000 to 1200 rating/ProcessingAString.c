#include <stdio.h>
#include <ctype.h>


int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    char str[1001];
	    scanf("%s",str);
   
     int sum=0;
     
     for(int i=0;str[i]!='\0';i++)
      {
          if(isdigit(str[i]))
           {
               sum=sum+str[i]-'0';
           }
      }
	    
	    printf("%d\n",sum);
	    
	}
	
	return 0;

}

