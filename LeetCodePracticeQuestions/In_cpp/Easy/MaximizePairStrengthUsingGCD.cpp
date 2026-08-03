class Solution {
public:
    long long maxPairStrength(vector<int>& nums) 
    {
        long long mx=0;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
             {
                long long g=gcd(nums[i],nums[j]);

               long long val=(1LL * nums[i]*nums[j])/(g*g);

                if(val>mx)
                 {
                    mx=val;
                 }
             }
        }

        return mx;
        
    }
};
