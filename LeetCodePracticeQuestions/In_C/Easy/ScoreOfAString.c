int scoreOfString(char* s) 
{
    int sum=0;
    int n=strlen(s);

    for(int i=1;i<n;i++)
     {
        int val=abs((int)(s[i]-s[i-1]));
        sum=sum+val;
     }

     return sum;
    
}
