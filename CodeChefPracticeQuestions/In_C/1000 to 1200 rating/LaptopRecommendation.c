#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int N;
        scanf("%d", &N);

        int freq[11]={0};
        int ar[N];

    
        for (int i = 0;i< N;i++)
            scanf("%d", &ar[i]);

        for (int i = 0; i<N;i++)
            freq[ar[i]]++;

        int maxFreq=0;
        for (int i =1;i<=10; i++)
        {
            if (freq[i]>maxFreq)
                maxFreq=freq[i];
        }

        int countMax=0;
        int laptop=-1;

        for (int i=1;i<=10;i++) 
        {
            if (freq[i]==maxFreq)
            {
                countMax++;
                laptop=i;
            }
        }

        if (countMax>1) 
        {
            printf("CONFUSED\n");
        } 
        
        else
        {
            printf("%d\n",laptop);
        }
    }

    return 0;
}
