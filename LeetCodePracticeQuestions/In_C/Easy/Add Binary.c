char* addBinary(char* a, char* b) 
{
   int lenA=strlen(a);
   int lenB=strlen(b);

   int maxLen=(lenA > lenB ? lenA : lenB) + 1;

   int carry=0;  
   int i=lenA-1;
   int j=lenB-1;
   int k=0;

   char array[maxLen];
   while(carry || i>=0 || j>=0)
   {
      int sum=carry;

      if(i>=0)
       {
        sum=sum+a[i--]-'0';
       }

      if(j>=0)
       {
        sum=sum+b[j--]-'0';
       }

       array[k++]=(sum % 2) + '0';
       carry=sum/2;

   } 

   char *result = (char*)malloc((k+1)*sizeof(char));

   int len=k;
   for(int i=0;i<len;i++)
    {
        result[i]=array[k-i-1];
    }

    result[len]='\0';

    return result;
 
}
