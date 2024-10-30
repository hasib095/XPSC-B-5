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
    string s;
    cin >> s;
    int cnt[26]={false};
	for(int i=0;i<s.size();i++)
    {
		cnt[s[i]-'a']=1;
	}
	for(int i=0;i<26;i++)
    {
		if(!cnt[i])
        {
			cout << char('a' + i);
			return ;
		}
	}
   cout << "None" << endl;
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