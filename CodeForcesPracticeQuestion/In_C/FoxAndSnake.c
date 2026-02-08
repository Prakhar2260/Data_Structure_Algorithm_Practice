# include <stdio.h>

int main()
{
   int n,m;
   scanf("%d %d",&n,&m);

   char array[n][m];

     for(int i=0;i<n;i++)
     {
        if(i%2==0)
         {
           for(int j=0;j<m;j++)
            {
               array[i][j]='#';
            }
         }   

         else
         {
           for(int j=0;j<m;j++)
            {
               array[i][j]='.';
            }
         }   
     }

       for(int i=1;i<n;i=i+4)
        {
          array[i][m-1]='#';
        }

        for(int i=3;i<n;i=i+4)
        {
          array[i][0]='#';
        }

     for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
         {
           printf("%c",array[i][j]);
         }
         printf("\n");
       }

    return 0;
}
