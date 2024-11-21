#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define endl "\n"
#define vl vector<long long>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define arr(a,n)  for(ll i =0; i < n; i++) cin >> a[i];
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define srt(v)  sort(v.begin(), v.end());
#define rsrt(v)  sort(v.rbegin(), v.rend());
const int mod = 1e9+7;

void solve()
{
   int n;
   long long k;
   cin >> n >> k;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }

   int l = 0, r = 0;
   long long sum = 0, ans = 0;
   while (r < n)
   {
      sum += a[r];
      if (sum <= k)
      {
         ans += (r - l + 1);
      }
      else
      {
         while (sum > k && l <= r)
         {
            sum -= a[l];
            l++;
         }
         if (sum <= k)
         {
            ans += (r - l + 1);
         }
      }
      r++;
   }
   cout << ans << endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif
    solve();
   // int t;
   // cin >> t;
   // while (t--)
   // {
   //    solve();
   // }
   return 0;
}