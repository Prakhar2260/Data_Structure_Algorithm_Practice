# include <stdio.h>

int main()
{
  int t;
  scanf("%d",&t);

  while(t--)
  {
    char str[11];
    scanf("%s",str);

    char st[11]="codeforces";

    int count=0;

    for(int i=0;i<10;i++)
     {
        if(str[i]!=st[i])
          count++;
     }

     printf("%d\n",count);
  }

  return 0;

}
