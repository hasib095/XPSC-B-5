#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
   for(int i=0;i<k;i++)
    {
        int x;
        cin >> x;
        // int ans=-1;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == x)
            {
                cout << i + 1 << endl;
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << 0 << endl;
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
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}