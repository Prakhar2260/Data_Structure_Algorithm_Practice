class Solution {
public:
    bool checkDivisibility(int n)
    {
        int num1=n;
        
        int DigitSum=0;

        while(num1>0)
         {
            DigitSum+=num1%10;
            num1=num1/10;
         } 

         int DigitProduct=1;

         num1=n;
         while(num1>0)
         {
            DigitProduct*=num1%10;
            num1=num1/10;
         } 

         if(n%(DigitSum+DigitProduct)==0)
          return true;

          else
           return false;
    }
};
