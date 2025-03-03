#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (sum % 3 == 2)
    {
        cout << 1 << endl;
    }
    if (sum % 3 == 1)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 3 == 1)
            {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
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