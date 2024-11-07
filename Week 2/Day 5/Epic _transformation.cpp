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
      cin >> n;
      map<int, int> cnt;
      for (int i = 1;i <= n;i++) 
      {
         int x;
         cin >> x;
         cnt[x]++;
      }

      priority_queue<int> pq;
      for (auto [x, y] : cnt) 
      {
         pq.push(y);
      }

      while (!pq.empty()) 
      {
         if (pq.size() < 2) 
         {
            break;
         }
         int x, y;
         x = pq.top();
         pq.pop();
         y = pq.top();
         pq.pop();
         x--, y--;
         if (x >= 1) 
         {
            pq.push(x);
         }
         if (y >= 1)
          {
            pq.push(y);
         }
      }
      int ans = 0;
      while (!pq.empty()) 
      {
         ans += pq.top();
         pq.pop();
      }
      cout << ans << '\n';
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
    //solve();
    int t; cin >> t; while(t--){solve();}
    return 0;
}