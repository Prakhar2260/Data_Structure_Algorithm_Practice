int bitwiseComplement(int n) 
{
     char bin[40];
     int i=0;

     if(n==0)
       return 1;
       
     int temp=n;

     while(temp>0)
      {
        bin[i++]=(temp%2)+'0';
        temp=temp/2;
       }

    bin[i]='\0';

    int result=0;
    int power=1;

    for(int j=0;j<i;j++)
    {
        if(bin[j]=='0')
            result= result+power;

        power *= 2;
    }

    return result;
    
}
