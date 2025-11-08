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
      
      char s[N+1];
      scanf("%s",&s);
      
      int count=0;
      for(int i=0;i<N;i++)
        {
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
           count=0;
          
         else  
         count++;
         
         if(count>3)
           break;
        }
        
     if(count<=3)
      printf("YES\n");
      
     else
      printf("NO\n");
    
    }
    return 0;
}

