# include <stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  
  while(t--)
  {
     char str[7];
     scanf("%s",str);
     
     int sum1=(str[0]-'0') + (str[1]-'0') + (str[2]-'0');
     int sum2=(str[3]-'0') + (str[4]-'0') + (str[5]-'0');
     
     if(sum1==sum2)
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
