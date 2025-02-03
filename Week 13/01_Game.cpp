#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    int mn = min(mp['0'], mp['1']);
    if (mn & 1)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
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