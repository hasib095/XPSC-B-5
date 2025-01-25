#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n), prefix(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for (ll i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int k, ans = -1;
        cin >> k;
        auto it = lower_bound(all(prefix), k);
        if (it != prefix.end())
        {
            ans = it - prefix.begin();
        }
        cout << ans << endl;
    }
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