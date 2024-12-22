#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(all(v));
    if (v.size() < k)
        cout << -1 << endl;
    else
        cout << v[k - 1] << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}