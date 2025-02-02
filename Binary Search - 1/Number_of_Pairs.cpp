#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    ll ans = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        ll a = l - v[i];
        ll b = r - v[i];
        auto LB = lower_bound(all(v), a) ;
        auto UP = upper_bound(all(v), b);
        ll ok = (UP - LB);
        ans += (1LL)*ok;
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
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}