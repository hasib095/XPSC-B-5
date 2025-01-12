#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(x) begin(x), end(x)

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int ans = 0;
void almost_Prime(int a)
{
    int ok = 0;
    vector<int> divisor;
    for (int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            divisor.push_back(i);
        }
        if ((a / i) != i)
        {
            divisor.push_back(a / i);
        }
    }
    sort(all(divisor));
    for (auto x : divisor)
    {
        if (is_prime(x))
        {
            ok++;
        }
    }
    if (ok == 2)
    {
        ans++;
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        almost_Prime(i);
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
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}