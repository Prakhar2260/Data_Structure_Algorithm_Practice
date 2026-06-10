int strStr(char* haystack, char* needle) 
{
    int n=strlen(haystack);
    int m=strlen(needle);

    if(m>n)
     return -1;

    int start=0;
    int i=0;
    int j=0;

    while(i<n && j<m)
     {
        if(haystack[i]==needle[j])
         {
            i++;
            j++;

            if(j==m)
              return start;
         }

         else
         {
            start++;
            i=start;
            j=0;
         }
         
     }

     return -1;
    
}
