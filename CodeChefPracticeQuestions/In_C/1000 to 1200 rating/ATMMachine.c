#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	 {
	   int N,K;
	   scanf("%d %d",&N,&K);
	   
	   int ar[N];
	   for(int i=0;i<N;i++)
	     scanf("%d",&ar[i]);

       int num[N];
       
       for(int i=0;i<N;i++)
         {
          if(ar[i]<=K)
           {
            num[i]=1;
            K=K-ar[i];
           }
           
          else
           {
            num[i]=0;   
           }
         }
         
         for(int i=0;i<N;i++)
           {
            printf("%d",num[i]);   
           }
           
           printf("\n");
	 }

       return 0;
}

