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
  int n;cin>>n;
  map<string,string>ans,has;
  for(int i=0;i<n;i++)
  {
    string a,b;
    cin>>a>>b;
    if(has.find(a)!=has.end())
    {
     string s= has[a];
     ans[s]=b;
     has.erase(a);
     has[b]=s;
    }
    else
    {
    ans[a]=b;
    has[b]=a;
    }
  }
  cout<<ans.size()<<endl;
  for(auto [x,y]:ans)
  {
    cout<<x <<" "<< y <<endl;
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