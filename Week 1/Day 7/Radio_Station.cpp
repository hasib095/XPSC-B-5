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
map<string,string>mp;
void solve()
{
  int n,m;cin>>n>>m;
  for(int i=0;i<n;i++)
  {
   string a,b;
   cin>>a>>b;
   mp[b]=a;
  }
  for(int i=0;i<m;i++)
  {
   string c,d;
   cin>>c>>d;
   string tmp=d;
   d.pop_back();
   string ans=mp[d];
   cout<<c<<" "<<tmp<<" "<<'#'<<ans<<endl;
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