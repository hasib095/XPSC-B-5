#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define arr(a,n)  for(ll i =0; i < n; i++) cin >> a[i];
#define all(v) v.begin(), v.end()
#define srt(v)  sort(v.begin(), v.end());
const int mod = 1e9+7;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    map<int,int>mp;
    for (int i = 0; i < n; i++)
       {
       cin >> a[i];
       mp[a[i]]++;
       } 
    int ans=0;
    for(int i=1;i<=n;i++)
    {
     ans=max(mp[a[i]],ans);
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