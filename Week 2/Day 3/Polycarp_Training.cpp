#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define arr(a,n)  for(ll i =0; i < n; i++) cin >> a[i];
#define all(v) v.begin(), v.end()
#define srt(v)  sort(v.begin(), v.end());
const int mod = 1e9+7;
void solve()
{
    ll n;
    cin >> n;
    multiset<ll> ml;
    // vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int ans = 0, d = 1;
    while (!ml.empty())
    {
        auto LB = ml.lower_bound(d);
        if (LB == ml.end())
            break;
        else
        {
            ans++;
            ml.erase(LB);
            d++;
        }
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
    // int t; cin >> t; while(t--){solve();}
    return 0;
}