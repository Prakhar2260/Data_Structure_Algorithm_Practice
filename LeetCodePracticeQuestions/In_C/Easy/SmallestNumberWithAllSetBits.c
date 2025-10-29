   int smallestNumber(int n) 
{
   int num=n;

   int bits=0;

   while(num>0)
    {
      bits++;
      num=num>>1;  
    } 

    int x=(1<<bits)-1;

    if (x < n) 
    {
        x = (1 << (bits + 1)) - 1;
    }

    return x;
    
}
