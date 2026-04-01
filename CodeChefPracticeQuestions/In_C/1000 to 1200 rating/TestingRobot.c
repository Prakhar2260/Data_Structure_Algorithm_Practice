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
	   
	   char str[N+1];
	   scanf("%s",str);
	   
	   int pos=0;
	   int minpos=0,maxpos=0;
	    
	   for(int i=0;i<N;i++)
	   {
            if(str[i]=='L')
            pos--;
            
            else
            pos++;

            if(pos<minpos)
            minpos=pos;
            
            if(pos>maxpos)
            maxpos=pos;
        }

        printf("%d\n",maxpos-minpos+1); 
	    
	}
	
	return 0;

}

