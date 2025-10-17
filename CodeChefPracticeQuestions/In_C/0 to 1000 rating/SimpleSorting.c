#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
 {
    return (*(int *)a)-(*(int *)b); 
 }

int main() {
	// your code goes here
	int N;
	scanf("%d",&N);
	
	int ar[N];
	
	for(int i=0;i<N;i++)
	  scanf("%d",&ar[i]);

    qsort(ar,N,sizeof(int),cmp);

      for(int i=0;i<N;i++)
        printf("%d\n",ar[i]);
        
        return 0;
}

