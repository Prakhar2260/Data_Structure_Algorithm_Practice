#include <stdio.h>

int main() 
{
	// your code goes here
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
        int N,A,B;
        scanf("%d %d %d",&N,&A,&B);
        
        char s[N+1];
        scanf("%s",s);
        
        int one=0,zero=0;
        
        for(int i=0;i<N;i++)
         {
             if(s[i]=='1')
              one++;
              
             else
              zero++; 
         }
         
         printf("%d\n",one*B+zero*A);
        
    }
    
    return 0;

}

