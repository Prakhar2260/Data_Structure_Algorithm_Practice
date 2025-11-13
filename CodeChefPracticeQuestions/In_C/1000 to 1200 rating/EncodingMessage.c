#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
    {
     int N;
     scanf("%d",&N);
     
     char S[N+1];
     scanf("%s",&S);
     
     
     int efflen=0;
     
     if(N%2==0)
       efflen=N;
       
      else
       efflen=N-1;
       
       for(int i=1 ;i<efflen;i=i+2)
         {
           char ch=S[i-1];
           S[i-1]=S[i];
           S[i]=ch;
           
         }
         
           for(int i=0;i<N;i++)
          {
            S[i]='z'-(S[i]-'a');
          }
          
          printf("%s\n",S);
    }
    
    return 0;
}

