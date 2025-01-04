#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n;
    cin >> n;
    if (n & 1)
    {

        int cnt = 1 + (n - 3) / 2;
        cout << cnt << endl;
        cout << 3 << " ";
        for (int i = 1; i <= (n - 3) / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
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
// https://codeforces.com/contest/749/problem/A