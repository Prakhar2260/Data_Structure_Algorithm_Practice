bool hasSameDigits(char* s) 
{
  int len=strlen(s);

  int ar[len];

  for(int i=0;i<len;i++)
    {
      ar[i]=s[i]-'0';  
    }

while(len>2)
{
  for(int i=0;i<len-1;i++)
    {
      ar[i]=(ar[i]+ar[i+1])%10;  
    }   
   len--;
}

if(ar[0]==ar[1])
  {
   return true; 
  }

  
   return false;
    
}
