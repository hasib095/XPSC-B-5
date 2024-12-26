#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)
ll LCM(ll a, ll b)
{
    return ((a / __gcd(a, b) * b));
}
void solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll cmn = (n / LCM(a, b));
    ll ans = ((p * ((n / a) - cmn))) + ((q * ((n / b) - cmn)));
    ans += max(p, q) * cmn;
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}