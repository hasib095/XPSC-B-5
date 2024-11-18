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
   ll n, s;
   cin >> n >> s;
   ll a[n];
   for (ll i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   ll l = 0, r = 0, ans = 0, cnt = 0;
   while (r < n)
   {
      cnt += a[r];
      if (cnt <= s)
      {
         ans = max(ans, r - l + 1);
      }
      else
      {
         cnt -= a[l];
         l++;
      }
      r++;
   }
   cout<<ans<<endl;
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