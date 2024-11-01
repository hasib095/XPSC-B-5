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
const int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    map<string, vector<int>> mp;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            string s;
            cin >> s;
            mp[s].push_back(i);
        }
    }
    vector<int>ans(4);
    for(auto[x,y]:mp)
    {
        vector<int> v=y;
        if(v.size()==1)
        {
            ans[v[0]]+=3;
        }
        if(v.size()==2)
        {
            ans[v[0]]+=1;
            ans[v[1]]+=1;
        }
    }
    
    cout<<ans[1]<<" "<< ans[2]<<" " << ans[3]<<endl;
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