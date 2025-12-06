#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  
	  char S[N+1];
	  scanf("%s",&S);
	  
	  char R[N+1];
	  scanf("%s",&R);
	  
	  int zeroS=0,zeroR=0,oneS=0,oneR=0;
	  
	  for(int i=0;i<N;i++)
	   {
	      if(S[i]=='0')
	       zeroS++;
	      
	      else
	       oneS++;
	       
	      if(R[i]=='0')
	       zeroR++;
	      
	      else
	       oneR++;
	    }

      if(zeroS==zeroR && oneS==oneR)
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

