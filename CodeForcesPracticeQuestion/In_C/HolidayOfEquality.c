# include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n); 

    if(n==1)
     {
        printf("0\n");
        return 0;
     }

    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    int max=0;

    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }

    int val=0;
    for(int i=0;i<n;i++)
    {
        val = val + (max-array[i]);
    }

    printf("%d\n",val);

    return 0;
}
