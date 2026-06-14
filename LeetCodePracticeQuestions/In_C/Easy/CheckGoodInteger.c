bool checkGoodInteger(int n)
{
    int num=n;

    int squareSum=0;
    int digitSum=0;

    while(num>0)
    {
        int rem=num%10;
        digitSum+=rem;
        squareSum+=rem*rem;
        num=num/10;
    } 

    if(squareSum-digitSum >= 50)
     {
        return true;
     }

     else
     return false;
    
}
