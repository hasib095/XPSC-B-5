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
int n,m;cin>>n>>m;
 vector<int>a(n+1);
 for(int i=1;i<=n;i++) cin>>a[i];
 
 set<int>s;
 vector<int>v(n+1);
 for(int i=n;i>=1;i--)
 {
  s.insert(a[i]);
  v[i]=(s.size());
 }
 for(int i=1;i<=m;i++)
 {
    int pos;cin>>pos;
    cout<<v[pos]<<endl;
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
    solve();
    // int t; cin >> t; while(t--){solve();}
    return 0;
}