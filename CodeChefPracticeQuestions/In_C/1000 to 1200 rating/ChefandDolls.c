#include <stdio.h>

int cmp(const void *a,const void *b)
 {
  return *(int*)a - *(int*)b;     
 }

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d\n",&N);
	  
	  int ar[N];
	  for(int i=0;i<N;i++)
	   scanf("%d\n",&ar[i]);
	   
	  qsort(ar,N,sizeof(int),cmp); 
	  
	  int missing=0;
	  
	  for (int i = 0; i < N - 1; i += 2) {
            if (ar[i] != ar[i + 1]) {
                missing = ar[i];
                break;
            }
        }
        
        if (missing == 0)
            missing = ar[N - 1];
	    
	    printf("%d\n",missing);
	    
	    
	}
	
	return 0;

}

