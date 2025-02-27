#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a = 0, b = 0;
    int fv = v[f - 1];
    sort(v.rbegin(), v.rend());
    for (int i = k; i < v.size(); i++)
    {
        if (v[i] == fv)
        {
            b++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (v[i] == fv)
        {
            a++;
        }
    }
    if (a > 0 && b > 0)
    {
        cout << "MAYBE" << endl;
    }
    else if (a > 0 && b == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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