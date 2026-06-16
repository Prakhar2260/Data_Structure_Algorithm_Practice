class Solution {
public:
    string processStr(string s) 
    {
        string result;
        result.reserve(100);

        int len=s.length();
        for(int i=0;i<len;i++)
         {
            if(islower(s[i]))
             {
                result+=s[i];
             }

             else if(s[i]=='*' && !result.empty())
              {
                result.pop_back();
              }

              else if(s[i]=='#')
              {
                result+=result;
              }

              else if(s[i]=='%')
               {
                reverse(result.begin(),result.end());
               }
         }

         return result;
        
    }
};
