int EvenSum(int x)
{
    int sum=0;
   while(x>0)
   {
     int r=x%10;
     sum=sum+r;
     x=x/10;
   }

   if(sum%2==0)
     return 1;

    else
    return 0;   
}

int countEven(int num) 
{
    int count=0;

    while(num>0)
    {
       if(EvenSum(num))
        {
            count++;
        }

       num--; 
    }

    return count;
    
}
