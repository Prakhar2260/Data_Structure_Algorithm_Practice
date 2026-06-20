#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	
	int T;
    cin >> T;

    while(T--)
    {
        string s;
        cin >> s;

        int n=s.length();

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        int mid=n/2;

        for(int i=0;i<mid;i++)
            freq1[s[i]-'a']++;

        int start;

        if(n%2==0)
            start=mid;
            
        else
            start=mid+1;

        for(int i=start;i<n;i++)
            freq2[s[i]-'a']++;

        if(freq1==freq2)
            cout << "YES\n";
            
        else
            cout << "NO\n";
    }

    return 0;

}
