#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<int, vector<int>> mp;
  while (n--) {
    int x, c; cin >> x >> c;
    mp[c].push_back(x);
  }

  long long ans = 0;
  for (auto &[c, v] : mp) {
    sort(v.begin(), v.end());
    if (v.size() < 2) continue;
    for (int i=0; i<v.size(); i++) {
      if (i == 0) ans += v[1] - v[0];
      else if (i+1 == v.size()) ans += v[v.size()-1] - v[v.size()-2];
      else ans += min(v[i]-v[i-1], v[i+1]-v[i]);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}