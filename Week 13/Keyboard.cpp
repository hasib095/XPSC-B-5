#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    char ch;
    string ans, a;
    string b = {"qwertyuiopasdfghjkl;zxcvbnm,./"};
    cin >> ch >> a;
    for (auto c : a)
    {
        int idx = b.find(c);
        if (ch == 'R')
        {
            ans += b[idx - 1];
        }
        else
        {
            ans += b[idx + 1];
        }
    }
    cout << ans << endl;
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