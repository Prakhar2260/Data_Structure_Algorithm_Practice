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
  
  char A[N+1];
  scanf("%s",A);
  
  char B[N+1];
  scanf("%s",B);
  
  int zero1=0,one1=0;
  int zero2=0,one2=0;
  
  for(int i=0;i<N;i++)
    {
      if(A[i]=='0')
       zero1++;
       
      else
       one1++;
    }
    
    for(int i=0;i<N;i++)
    {
      if(B[i]=='0')
       zero2++;
       
      else
       one2++;
    }
    
     if(one1==one2 && zero1==zero2)
            printf("YES\n");
        else
            printf("NO\n");
    
}


 return 0;

}

