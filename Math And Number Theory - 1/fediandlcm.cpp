#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

ll LCM(ll a, ll b)
{
    // return ((a * b) / __gcd(a, b));
    return ((a / __gcd(a, b) * b));
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for ( ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && LCM(i, n / i) == n)
        {
            ans = i;
        }
    }
    cout << ans << " " << n / ans << endl;
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
    return 0;
}