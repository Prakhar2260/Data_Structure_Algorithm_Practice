#include <stdio.h>

int main() 
{
  int n;
  scanf("%d",&n);
  
  int player=0;
  int lead=0;
  
  int totalp1=0,totalp2=0;
  while(n--)
  {
    int p1,p2;
    scanf("%d %d",&p1,&p2);
    
    totalp1=totalp1+p1;
    totalp2=totalp2+p2;
    
    
    if(totalp1>totalp2)
      {
        
        if(lead<totalp1-totalp2)
        {
          lead=totalp1-totalp2;  
          player=1;
        }
      }
      
     else 
     {
        if(lead<totalp2-totalp1)
        {
        lead=totalp2-totalp1; 
        player=2;
        }
     }
      
      
  }
  
  printf("%d %d",player,lead);
  
  return 0;

}

