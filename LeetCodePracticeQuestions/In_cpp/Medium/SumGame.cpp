class Solution {
public:
    bool sumGame(string num) 
    {
        int len=num.size();

        int half=len/2;

        int lsum=0;
        int rsum=0;

        int lb=0;
        int rb=0;

        for(int i=0;i<half;i++)
         {
            if(num[i]=='?')
             {
                lb++;
             }

             else
             {
                lsum+=num[i]-'0';
             }
         }


         for(int i=half;i<len;i++)
         {
            if(num[i]=='?')
             {
                rb++;
             }

             else
             {
                rsum+=num[i]-'0';
             }
         }

         if(lb==0 && rb==0)
          {
            if(lsum==rsum)
             {
                return false;
             }

             else
             {
                return true;
             }
          }

          int diff=abs(lb-rb);

          if(diff%2!=0)
           {
             return true;
           }

           int mini=min(lb,rb);

           lb-=mini;
           rb-=mini;

           if(lb<rb)
            {
               if(lsum<rsum)
                {
                    return true;
                }
                
                if(9*(rb/2)==lsum-rsum)
                  return false;

                else
                {
                    return true;
                }
            }


            if(lb>rb)
            {
               if(lsum>rsum)
                {
                    return true;
                }

                if(9*(lb/2)==(rsum-lsum))
                 {
                    return false;
                 }

                 else
                  return true;
            }

        return lsum!=rsum;   
    }
};
