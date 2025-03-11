#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (v.size() == 1)
    {
        cout << v[0] << endl;
        return;
    }
    while (v.size() != 1)
    {
        int sum = v[v.size() - 1] + v[v.size() - 2] - 1;
        v.erase(v.end() - 1);
        v.erase(v.end() - 1);
        v.push_back(sum);
    }
    cout << v[0] << endl;
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