#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)
const int MOD = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int ans = 1;
    //(a*b)%m=(a%MOD*b%MOD)%MOD
    for (int i = 1; i <= n; i++)
    {
        ans = (1LL*ans%MOD * i%MOD)%MOD;
    }
    cout<<ans<<endl;
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
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// https://www.codechef.com/problems/FUM