class Solution {
public:

   int digitRange(int num)
    {
        int mx=0;
        int mn=9;

        while(num>0)
         {
            int digit=num%10;
            mx=max(mx,digit);
            mn=min(mn,digit);
            num/=10;
         }

        return mx-mn;
    }

    int maxDigitRange(vector<int>& nums)
     {
         int maxRange=-1;
         int sum=0;

        for(int num : nums)
         {
            int range=digitRange(num);

            if(range>maxRange)
             {
                maxRange=range;
                sum=num;
            }
            
             else if(range==maxRange)
              {
                sum+=num;
              }
        }

        return sum;
        
    }
};
