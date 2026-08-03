#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	
	int T;
	cin >> T;
	
	while(T--)
    {
        int n;
        cin >> n;
        
        vector <int> arr(n);
        
        for(int i=0;i<n;i++)
         {
             cin >> arr[i];
         }
         
         int mx=0,mn=131313;
         int mnPos=0,mxPos=0;
         
         for(int i=0;i<n;i++)
          {
              if(arr[i]<mn)
               {
                   mn=arr[i];
                   mnPos=i;
               }
               
               if(arr[i]>mx)
               {
                   mx=arr[i];
                   mxPos=i;
               }
          }
          
          int option1=max(mnPos, mxPos) + 1;
          int option2=n-min(mnPos, mxPos);
          int option3=min(mnPos, mxPos) + 1 + (n - max(mnPos, mxPos));

        cout << min({option1, option2, option3}) << '\n';
           
          
    }

}
