int sumOfGoodIntegers(int n, int k)
{
    int sum=0;

    int x=n-k;

    if(x<1)
     {
        x=1;
     }

    while(x<=n+k)
    {
        if((n&x) == 0)
          {
            sum+=x;
          }

           x++;
    }

    return sum;
    
}
