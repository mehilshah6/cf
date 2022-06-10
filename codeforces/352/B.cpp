#include <bits/stdc++.h>
using namespace std;
bool sortcol(const pair<int,int> a,const pair<int,int> b)
{   if(a.first == b.first)
{   return a.second < b.second;
   
}
     return a.first < b.first;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  map<int, vector<int>> m;
  int temp;
  for (int i = 0; i < n; i++)
  {
      cin >> temp;
      m[temp].push_back(i);
  }
  vector<pair<int,int>> ans;
  for(auto i:m)
  {
      int t = i.second.size();
      if(t == 1)
      {
          ans.push_back({i.first, 0});
          continue;
      }
      vector<int> n = i.second;
      int diff = n[1] - n[0];
      for (int i = 2; i < t; i++)
      {
          if(n[i]-n[i-1] != diff)
          {
              diff = -1;
              break;
          }

      }
      if(diff != -1)
      {
          ans.push_back({i.first, diff});
      }
  }
  sort(ans.begin(), ans.end(), sortcol);
  cout << ans.size() << "\n";
  for (int i = 0; i < ans.size(); i++)
  {
      cout << ans[i].first << " " << ans[i].second << "\n";
  }
      return 0;
}