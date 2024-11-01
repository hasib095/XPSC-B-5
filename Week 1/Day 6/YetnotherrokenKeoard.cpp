#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define vl vector<long long>
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define arr(a,n)  for(ll i =0; i < n; i++) cin >> a[i];
#define all(v) v.begin(), v.end()
#define srt(v)  sort(v.begin(), v.end());
const int mod = 1e9+7;

void solve()
{
  string s;
  cin >> s;
  vl pl, pu, ans;
  for (int i = 0; i < s.size(); i++)
  {
    if (isupper(s[i]) && s[i] != 'B')
      pu.push_back(i);
    else if (islower(s[i]) && s[i] != 'b')
      pl.push_back(i);

    if (s[i] == 'B' && !pu.empty())
    {
      pu.pop_back();
    }
    else if (s[i] == 'b' && !pl.empty())
    {
      pl.pop_back();
    }
  }
  for (int i = 0; i < pl.size(); i++)
  {
    ans.push_back(pl[i]);
  }
  for (int i = 0; i < pu.size(); i++)
  {
    ans.push_back(pu[i]);
  }
  cout<<s<<endl;
  sort(ans.begin(),ans.end());
  for (int i = 0; i < ans.size(); i++)
  {
    cout << s[ans[i]];
  }
  cout << endl;
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