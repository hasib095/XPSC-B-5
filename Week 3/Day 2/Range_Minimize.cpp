#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define endl "\n"
#define vl vector<long long>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define arr(a,n)  for(ll i =0; i < n; i++) cin >> a[i];
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define srt(v)  sort(v.begin(), v.end());
#define rsrt(v)  sort(v.rbegin(), v.rend());
const int mod = 1e9+7;

void solve()
{
    ll n;
    cin >> n;
    vl v(n);
    
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    srt(v);
    ll a,b,c;
    a=v[n-1]-v[2];//first two
    b=v[n-3]-v[0]; // last two
    c=v[n-2]-v[1]; //first and last
    cout<<min(a,min(b,c))<<endl;
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