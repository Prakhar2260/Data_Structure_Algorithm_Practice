# include <stdio.h>

int main()
{
   int N;
    scanf("%d",&N);

    int array[N][2];
    for(int i=0;i<N;i++)
     {
        scanf("%d %d",&array[i][0],&array[i][1]);
     }

     int count=0;
      for(int i=0;i<N;i++)
        {
            int value=array[i][1];

            for(int j=0;j<N;j++)
              {
                if(i==j)
                 continue;

                if(value==array[j][0])
                 {
                    count++;
                 }

              }
        }

        printf("%d\n",count);

    return 0;
}
