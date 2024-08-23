#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <utility>
using namespace std;

struct pair_hash {
  size_t operator()(const pair<int, int> &p) const {
    return (p.first << 16) ^ p.second;
  }
};

void solve(void) {
  int n, m; cin >> n >> m;
  unordered_set<pair<int, int>, pair_hash> s;
  while (m--) {
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    s.insert({a, b});
  }

  int ans = 0;
  for (int i=1; i<=n-2; i++) for (int j=i+1; j<=n-1; j++) for (int k=j+1; k<=n; k++) {
    if (s.find({i, j}) == s.end() && s.find({j, k}) == s.end() && s.find({i, k}) == s.end()) {
      ans++;
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