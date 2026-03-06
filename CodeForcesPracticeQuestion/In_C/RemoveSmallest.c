# include <stdio.h>
# include <math.h>

int cmp(const void *a,const void *b)
    {
        return (*(int*)a - *(int*)b);
    }

int main()
{
  int T;
  scanf("%d",&T);

  while(T--)
  {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }

     qsort(arr, n, sizeof(int),cmp);

     int count=0;

     for(int i=1;i<n;i++)
      {
        if(abs(arr[i]-arr[i-1])<=1)
          {
            count++;
          }
      }

      if(count==n-1)
       {
        printf("YES\n");
       }

         else
          {
             printf("NO\n");
          }
  }

  return 0;
}
