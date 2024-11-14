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
    ll n, m;
    cin >> n >> m;
    vl a(n);
    vl b(m);
    vl ans;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    ll r = 0, l = 0;
    while (l < n && r < m)
    {
        if (a[l] < b[r])
        {
            ans.push_back(a[l]);
            l++;
        }
        else
        {
            ans.push_back(b[r]);
            r++;
        }
    }
    while(l<n)
    {
        ans.push_back(a[l]);
        l++;
    }
    while(r<m)
    {
        ans.push_back(b[r]);
        r++;
    }
    
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
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
    //  cin >> t;
    //  while (t--)
    //  {
    //      solve();
    //  }
    return 0;
}