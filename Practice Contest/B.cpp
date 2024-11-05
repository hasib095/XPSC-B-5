#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define arr(a, n)              \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end());
const int mod = 1e9 + 7;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int cnt = x * y;
     int t = z * 24 * 60;
    if (cnt <= t)
        yes;
    else
        no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}