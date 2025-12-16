#include <stdio.h>

int main() {
	// your code goes here
	
    int T;
    scanf("%d",&T);
    

    while(T--)
    {
        int N;
        scanf("%d",&N);

        int freq[101]={0};

        for(int i=0;i<N;i++)
        {
            int x;
            scanf("%d",&x);
            freq[x]++;
        }
        

        int c = 1;
        
        for(int i =1;i<=100;i++)
        {
            if(freq[i]%2!= 0)
            {
                c= 0;
                break;
            }
        }

        if (c)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}


