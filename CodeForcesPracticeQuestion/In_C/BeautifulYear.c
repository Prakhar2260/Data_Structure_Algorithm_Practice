# include <stdio.h>

int check(int year)
 {
    int seen[10]={0};

    while (year>0)
    {
        int digit=year%10;
        if (seen[digit])
            return 0;
        seen[digit] = 1;
        year /= 10;
    }
    return 1;

 }



int main()
{
    int year;
    scanf("%d",&year);
 
      int k=0;
    for(int i=1;i<=9000;i++)
     {
       if(check(year+i))
        {
          k=year+i;
          break;
        } 
    
     }

     printf("%d\n", k);

    return 0;
}
