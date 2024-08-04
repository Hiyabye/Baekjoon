#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

struct hash_pair {
  size_t operator()(const pair<int, int> &p) const {
    return (p.first << 16) ^ p.second;
  }
};

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> p(n);
  unordered_set<pair<int, int>, hash_pair> s;
  for (int i=0; i<n; i++) {
    cin >> p[i].first >> p[i].second;
    s.insert(p[i]);
  }

  int ans = 0;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    int dy = p[j].first - p[i].first, dx = p[j].second - p[i].second;
    if (dy * dy + dx * dx <= ans) continue;
    if (s.find({p[i].first + dx, p[i].second - dy}) != s.end() && s.find({p[j].first + dx, p[j].second - dy}) != s.end()) {
      ans = dy * dy + dx * dx;
    }
    if (s.find({p[i].first - dx, p[i].second + dy}) != s.end() && s.find({p[j].first - dx, p[j].second + dy}) != s.end()) {
      ans = dy * dy + dx * dx;
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}