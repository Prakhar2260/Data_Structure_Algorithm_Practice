#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int current=0;
    int capacity=0;

    for (int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);

        current=current - a; 
        current= current + b; 

        if (current>capacity)
            capacity=current;
    }

    printf("%d\n",capacity);
    return 0;
}
