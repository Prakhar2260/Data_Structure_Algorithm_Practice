#include <stdio.h>

int cmp(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int ar[N];
	    for(int i=0;i<N;i++)
	     scanf("%d",&ar[i]);
	     
        qsort(ar,N,sizeof(int),cmp);

        int minDiff=1000000000;

        for(int i=1;i<N;i++) 
        {
            int diff=(ar[i]-ar[i-1]);
            
            if(diff<minDiff)
              minDiff=diff;
        }

        printf("%d\n",minDiff);
	}

    return 0;
}

