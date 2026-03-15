
int countCommas(int n) 
{
    int num=n;
    int digits=0;
    while(num>0)
    {
        digits++;
        num=num/10;
    }

    if(digits<=3)
     {
        return 0;
     }

     if(digits==4)
     {
        return n-999; 
     }

     if(digits==5)
     {
        return n-999; 
     }  

         return n-999;
    
}
