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
  ll n,k;cin>>n>>k;
  map<int,multiset<int>>mp;
  for(int i=1;i<=n;i++)
  {
    int x;cin>>x;
    mp[x].insert(i);
  }
  while(k--)
  {
    int l,r;
    cin>>l>>r;
    if(mp.find(l)==mp.end() || mp.find(r)==mp.end())
    {
        no;
    }
    else
    {
        int lf=*mp[l].begin();
        int rt=*mp[r].rbegin();
        if(lf<rt)yes;
        else no;
    }
  }

}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
    //solve();
     int t; cin >> t; while(t--){solve();}
    return 0;
}