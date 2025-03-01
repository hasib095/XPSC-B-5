#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), lg;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int win = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            win++;
        }
        else
        {
            lg.push_back(b[i] - a[i] + 1);
        }
    }
    if (win >= (n / 2 + 1))
    {
        cout << "YES" << endl;
        return;
    }
    sort(all(lg));
    int i = 0;
    for (int i = 0; i < lg.size() && x > 0; i++)
    {
        if (x >= lg[i])
        {
            x -= lg[i];
            win++;
        }
        else
        {
            break;
        }
    }
    if (win >= n / 2 + 1)
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