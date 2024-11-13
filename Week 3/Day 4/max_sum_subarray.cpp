class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
     int s=0,ans=0,mx=0;
       for(int i=0;i<k;i++)
       {
           s+=arr[i];
       }
       ans=s;
       if(arr.size()==k)
       {
           return ans;
       }
       else
       {
       for(int i=k;i<arr.size();i++)
       {
           s+=arr[i];
           s-=arr[i-k];
           mx=max(s,ans);
           ans=mx;
       }
      return mx;
    }
       }
};