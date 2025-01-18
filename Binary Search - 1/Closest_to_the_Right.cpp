#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++)
    {
        int key;
        cin >> key;
        int l = 0, r = v.size() - 1, ans = 0;
        bool ok = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key <= v[mid])
            {
                ans = mid;
                r = mid - 1;
                ok = true;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ok)
            cout << ans + 1 << endl;
        else
            cout << n + 1 << endl;
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
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}