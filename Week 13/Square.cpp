#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int a, b, c, d;
    int wi, ln;
    cin >> a >> b >> c >> d;

    if (max(a, b) == max(c, d))
    {
        wi = max(a, b);
    }
    // cout<<wi<<endl;
    ln = min(a, b) + min(c, d);
    // cout<<ln<<endl;
    if (wi == ln)
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