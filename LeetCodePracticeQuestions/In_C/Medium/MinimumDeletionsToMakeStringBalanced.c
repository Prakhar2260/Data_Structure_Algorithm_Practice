int minimumDeletions(char* s)
 {
    int len=strlen(s);

    int bs=0;
    int deleted=0;
    for(int i=0;i<len;i++)
     {
        if(s[i]=='b')
         bs++;

        else 
         {
            if(deleted+1 < bs)
              {
                deleted++;
              }

            else
             {
               deleted=bs; 
             }  
         }
     }

     return deleted;
    
}
