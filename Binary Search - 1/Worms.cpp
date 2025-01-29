#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n), prefix(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        auto lb = lower_bound(all(prefix), q);
        int ans = lb - prefix.begin();
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
    solve();
    // int t; cin >> t; while(t--){solve();}
    return 0;
}