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
	    
	    int A[N];
	    for(int i=0;i<N;i++)
	     scanf("%d",&A[i]);
	     
	    int maxDay[100001];
	    
        for(int i=0;i<100001;i++)
         maxDay[i]=0;
        
        for(int i=0;i<N;i++)
        {
            int day=A[i];
            
            if(maxDay[day]<i+1)
                maxDay[day]=i+1;
        }
        
        int totalPenalty=0;
        
        for(int i=0;i<100001;i++)
            totalPenalty +=maxDay[i];
        
        printf("%d\n",totalPenalty);
    }
	
	return 0;

}

