int reverseBits(int n)
{
    int array[32]={0};

     unsigned int un=(unsigned int)n;
    for(int i=0;i<32;i++)
       {
        unsigned int bit=((un>>i) & 1);

        array[i]=bit; 
       }

     unsigned int result=0;

    for(int i=0;i<32;i++)
    {
        result=result*2+(array[i]);
    }

    return (int)result;
    
}
