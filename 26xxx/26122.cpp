#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  string s; cin >> s;

  vector<int> v; int p = 0;
  for (int i=1; i<k; i++) {
    if (s[i-1] == s[i]) continue;
    v.push_back(i - p); p = i;
  }
  v.push_back(k - p);

  int ans = 0;
  for (int i=1; i<v.size(); i++) {
    ans = max(ans, min(v[i-1], v[i]) * 2);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}