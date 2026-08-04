class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums)
    {
        int mn=*min_element(nums.begin() , nums.end());
        int mx=*max_element(nums.begin() , nums.end());

        vector <bool> freq(101,false);
    
         int len=nums.size();

        for(int i=0;i<len;i++)
         {
            freq[nums[i]]=true;
         }

         vector <int> ans;

         for(int i=mn;i<mx;i++)
          {
            if(freq[i]==false)
             {
                ans.push_back(i);
             }
          }

          return ans;
        
    }
};
