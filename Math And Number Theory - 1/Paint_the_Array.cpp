#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for(auto val : v)cout<<val<<" ";cout<<endl;
    ll g1 = 0, g2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        g1 = __gcd(g1, v[i]);
    }
    // cout << g1 << " ";
    for (int i = 1; i < n; i += 2)
    {
        g2 = __gcd(g2, v[i]);
    }
    // cout << g2 << endl;
    ll ans = 0;
    bool ok = true;

    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % g1 == 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        ans = g1;
    else
    {
        ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % g2 == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            ans = g2;
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