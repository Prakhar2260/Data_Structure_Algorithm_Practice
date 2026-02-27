#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N,X;
	  scanf("%d %d",&N,&X);
	  
	  char st[N+1];
	  scanf("%s",st);
	  
      int access=0;
      
      int pos=1;
      
      for(int i=0;i<N;i++)
        {
            if(st[i]=='0')
             {
                 access--;
             }
             
             else
             {
                access=+X; 
             }
             
             if(access<0)
              {
                  pos=0;
                  break;
              }
        }
        
        if(pos)
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

