# include <stdio.h>

int main()
{
    int n,h;
    scanf("%d %d",&n,&h);

    int array[n];
    for(int i=0;i<n;i++)
     {
        scanf("%d",&array[i]);
     }

     int width = 0;

      for(int i=0;i<n;i++)
        {
           if(array[i]>h)
            {
             width += 2;
            } 

            else
            {
              width += 1;
            }
        }

        printf("%d\n",width);

    return 0;
}
