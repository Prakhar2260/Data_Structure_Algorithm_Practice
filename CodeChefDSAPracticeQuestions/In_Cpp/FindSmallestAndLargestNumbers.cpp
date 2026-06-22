pair<int, int> findMinMax(int n, const vector<int>& arr) 
{
//write your code here
  int mn=arr[0];
    int mx=arr[0];

    for(int i=1;i<n;i++)
    {
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }

    return {mn, mx};

}
