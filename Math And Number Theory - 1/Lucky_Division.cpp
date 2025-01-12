#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    string s;
    cin >> s;
    bool ok = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            continue;
        }
        else
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}