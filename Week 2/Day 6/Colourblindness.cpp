#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define endl "\n"
#define vl vector<long long>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define arr(a, n)              \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] == 'R' && b[i] != 'R') || a[i] != 'R' && b[i] == 'R')
        {
        f = false;
        break;
        }
    }
    if (f)
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
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}