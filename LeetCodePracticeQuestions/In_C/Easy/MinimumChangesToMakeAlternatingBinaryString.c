int minOperations(char* s)
{
    int count1=0;
    int count2=0;

    for(int i=0;s[i]!='\0';i++)
      {
        if(i%2==0 && s[i]!='0')
         {
            count1++;
         }

         if(i%2==1 && s[i]!='1')
         {
            count1++;
         }
      }

       for(int i=0;s[i]!='\0';i++)
      {
        if(i%2==0 && s[i]!='1')
         {
            count2++;
         }

         if(i%2==1 && s[i]!='0')
         {
            count2++;
         }
      }

      int MinCount= count1<count2 ? count1 : count2 ;


      return MinCount;
    
}
