# include <stdio.h>

int main()
 {
    int n,t;
    scanf("%d %d",&n,&t);

    char queue[n+1];
    scanf("%s",queue);
    

    for(int i=0;i<t;i++)
      {
        for(int j=1;j<n;j++)
          {
            if(queue[j-1]=='B' && queue[j]=='G')
              {
                queue[j-1]='G';
                queue[j]='B';
                j++;
              }
          }
      }

      for(int i=0;i<n;i++)
        {
          printf("%c",queue[i]);
        }
        printf("\n");
        
    return 0;
 }
