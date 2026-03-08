int DecimalEquivalent(char *p)
 {
    int res=0;

    for(int i=0;p[i]!='\0';i++)
      {
        res=res*2 + p[i]-'0';
      }

     return res; 
 }

 void decimalToBinary(int n,char *ptr,int len)
  {
    for(int i=len-1;i>=0;i--)
    {
        ptr[i]=(n%2)+'0';
        n=n/2;
    }

    ptr[len]='\0';
  }
  

char* findDifferentBinaryString(char** nums, int numsSize) 
{
    int n=numsSize;

    if(n==1 && strcmp(nums[0],"1")==0)
      {
         return "0";
      }

      if(n==1 && strcmp(nums[0],"0")==0)
      {
         return "1";
      }

    int EquiInt[n];
    int size=1;



    for(int i=1;i<=n;i++)
      {
        size=size*2;
      }

    int freq[size];

    for(int i=0;i<size;i++)
      {
        freq[i]=0;
      }

     for(int i=0;i<n;i++)
      {
        EquiInt[i]=DecimalEquivalent(nums[i]);
      }

      for(int j=0;j<n;j++)
       {
         freq[EquiInt[j]]++;
       }

       char *binary=(char *)malloc((n+1)*sizeof(char));

       for(int j=0;j<size;j++)
       {
         if(freq[j]==0)
          {
            decimalToBinary(j,binary,n);
            return binary;
          }
       }

       return binary;

}
