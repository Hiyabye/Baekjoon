#include <iostream>
#include <map>
#include <vector>
using namespace std;

inline bool check(int k, const vector<int> &v) {
  for (int i=1; i<v.size(); i++) {
    if (v[i] - v[i-1] <= k) return true;
  }
  return false;
}

void solve(void) {
  int n, k; cin >> n >> k;
  map<int, vector<int>> mp;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    mp[x].push_back(i);
  }

  int ans = -1;
  for (auto &[u, v] : mp) {
    if (v.size() < 2) continue;
    if (check(k, v)) ans = u;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}