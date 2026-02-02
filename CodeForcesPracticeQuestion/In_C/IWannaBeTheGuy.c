# include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);

   int p;
   scanf("%d",&p);

   int array1[p];
   for(int i = 0; i < p; i++)
    scanf("%d",&array1[i]);

   int q;
   scanf("%d",&q);

    int array2[q];
    for(int i = 0;i<q;i++)
    scanf("%d", &array2[i]);


   int freq[101]={0};

   for(int i=0;i<p;i++)
     {
       freq[array1[i]]++;
     }

      for(int i=0;i<q;i++)
     {
       freq[array2[i]]++;
     }

     int c=1;
     for(int j=1;j<=n;j++)
       {
          if(freq[j]==0)
           {
             c=0;
             break;
           }
       }

        if(c==1)
         printf("I become the guy.\n");
        else
         printf("Oh, my keyboard!\n");

         return 0;
}
