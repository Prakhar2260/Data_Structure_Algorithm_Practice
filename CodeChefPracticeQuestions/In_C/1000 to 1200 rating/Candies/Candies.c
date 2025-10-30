#include <stdio.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main()
{
	// your code goes here

   int t;
   scanf("%d",&t);
   
   while(t--)
    {
     int N;
     scanf("%d",&N);
     
     long ar[2*N];
     for(int i=0;i<2*N;i++)
       scanf("%ld",&ar[i]);
       
       qsort(ar, 2 * N, sizeof(long), cmp);
       
      int c=0;
      
      for (int i = 0; i < 2 * N - 2; i++)
      {
            if (ar[i] == ar[i + 1] && ar[i] == ar[i + 2]) {
                c = 1;
                break;
            }
        }
       
       if(c==1)
        printf("NO\n");
        
    else
     printf("YES\n");
        
    }
    
    return 0;


}

