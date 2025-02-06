#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    string s, ck;
    cin >> s;
    ck = "hello";
    int j = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ck[j])
        {
            ans++;
            j++;
        }
    }
    if (ans == 5)
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
    solve();
    // int t; cin >> t; while(t--){solve();}
    return 0;
}