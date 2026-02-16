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
      scanf("%s",S);
      
      char Tt[N+1];
      scanf("%s",Tt);
      
       int countS=0,countT=0;
       int possible=1;

        for(int i=0;i<N;i++)
        {
             if(Tt[i]=='1'&& S[i]=='0')
                possible = 0;
                
            if(S[i]=='1')
            countS++;
            
            if(Tt[i]=='1')
            countT++;
        }

        if(possible==1 && countS >= countT && (countS-countT)%2==0)
            printf("YES\n");
            
        else
            printf("NO\n");
         
    }
}

