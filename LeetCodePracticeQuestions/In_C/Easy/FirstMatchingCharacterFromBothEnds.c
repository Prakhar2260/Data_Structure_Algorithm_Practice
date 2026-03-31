int firstMatchingIndex(char* s) 
{
    int N=strlen(s);
    int i=0;
    int j=N-1;
 
    while(i<=j)
    {
        if(s[i]==s[j])
         {
            return i;
         }

         i++;
         j--;
    }

    return -1;
    
}
