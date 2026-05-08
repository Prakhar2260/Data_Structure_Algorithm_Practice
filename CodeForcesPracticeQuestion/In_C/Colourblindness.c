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
	    
	    char str[2][n+1];
	    
	    for(int i=0;i<2;i++)
	     {
	         scanf("%s",str[i]);
	     }
	     
	     int f=1;
	     
	     for(int i=0;i<n;i++)
	      {
	          char a=str[0][i];
	          char b=str[1][i];
	           
	         if(a=='G')
	           a='B';
	         
             if(b=='G')
               b='B';

            if(a!=b)
            {
                f=0;
                break;
            }
	      }
	      
	      if(f==1)
	      printf("Yes\n");
	      
	      else
	      printf("No\n");
	}
	
	return 0;
	

}

