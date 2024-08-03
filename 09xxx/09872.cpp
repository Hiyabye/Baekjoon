#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_map<string, int> mp;
  while (n--) {
    vector<string> v(3);
    for (int i=0; i<3; i++) cin >> v[i];
    sort(v.begin(), v.end());
    mp[v[0] + " " + v[1] + " " + v[2]]++;
  }

  int ans = 0;
  for (auto [_, v] : mp) {
    ans = max(ans, v);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}