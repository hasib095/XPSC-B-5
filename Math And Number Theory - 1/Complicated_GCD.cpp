#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)
int GCD(int a, int b)
{
    return __gcd(a, b);
}
void solve()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a << endl;
    }
    else
    {
        cout << 1 << endl;
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