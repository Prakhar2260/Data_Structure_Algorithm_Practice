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
	   
	   int array[N];
	   
	   for(int i=0;i<N;i++)
	   scanf("%d",&array[i]);

       int freq[100001];
       for(int i=0;i<100001;i++)
        freq[i]=0;
        
        for(int i=0;i<N;i++)
        {
         freq[array[i]]++;   
        }
        
        
        int c= 1;

        for (int k=1;k<=N;k++)
        {
            if(freq[k]%k != 0)
            {
                c=0;
                break;
            }
        }
        
        if(c==1)
         {
            printf("YES\n"); 
         }
         
         else
          printf("NO\n");
	}
	
	return 0;

}

