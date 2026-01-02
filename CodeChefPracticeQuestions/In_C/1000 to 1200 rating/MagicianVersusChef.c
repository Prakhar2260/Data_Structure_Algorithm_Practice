#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while(T--) 
    {
        int N,X,S;
        scanf("%d %d %d",&N,&X,&S);

        int pos=X;

        for (int i = 0; i < S; i++)
        {
            int A,B;
            scanf("%d %d",&A,&B);

            if (pos == A) 
            {
                pos = B;
            }
            
            else if (pos == B)
            {
                pos = A;
            }
        }

        printf("%d\n",pos);
    }

    return 0;
}
