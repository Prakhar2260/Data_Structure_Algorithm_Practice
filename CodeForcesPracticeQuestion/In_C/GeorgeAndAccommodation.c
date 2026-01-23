# include <stdio.h>
# include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int i=0;i<n;i++)
     {

            scanf("%d %d",&a[i][0],&a[i][1]);
          
     }

    int count=0;

    for(int i=0;i<n;i++)
     {
        int j=0;
            if(abs(a[i][0]-a[i][1])>=2)
                count++;
          
     }

     printf("%d\n",count);

     return 0;

}
