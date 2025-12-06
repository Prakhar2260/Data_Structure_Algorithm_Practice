int hammingWeight(int n) 
{
    int num=n;

    int binary[32]={0};
    int index=0;

    while(num>0)
     {
        binary[index]=num%2;
        num=num/2;
        index++;  
     }  

     int count=0;

     for(int i=0;i<32;i++)
       {
        if(binary[i]==1)
          count++;
       }

       return count;
}
