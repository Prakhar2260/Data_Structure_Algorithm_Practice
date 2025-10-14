#include <stdio.h>

int main() 
{
  int T;
  scanf("%d",&T);
  
  while(T--)
   {
    int N,K;
    scanf("%d %d",&N,&K);
    
    int str[N];
    
    for(int i=0;i<N;i++)
      str[i]=0;
       
      
    int sum=0;
    int index=0;
    
    for(int i=0;i<N;i++)
      {
        if(sum==K)
          {
            printf("YES\n");  
            break;
          }
          
        if(index>N-1)
          {
            printf("NO\n");
            break;
          }
          
        else{  
          str[index]=1;
          index=index+2;
          sum=sum+1;
        }
        
      }
      
   }
 return 0;
}

