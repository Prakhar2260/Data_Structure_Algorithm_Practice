#include <stdio.h>

int main() {
	// your code goes here

  int T;
  scanf("%d",&T);
  
  while(T--)
  {
    long X,N;
    
    scanf("%ld %ld",&N,&X);
    
       if(N%2==0)
        printf("YES\n");
        
        else if(X%2==1)
        printf("YES\n");
        
        else
        printf("NO\n");
  }
  
  return 0;
}

