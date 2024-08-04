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
  int n, k; cin >> n >> k;
  unordered_set<pair<int, int>, pair_hash> s;
  while (k--) {
    int x, y; cin >> x >> y;
    s.insert({x, y});
  }

  unordered_set<pair<int, int>, pair_hash> ans;
  for (const auto &[x, y] : s) {
    if (x-2 >= 1 && s.find({x-2, y}) == s.end()) ans.insert({x-2, y});
    if (y-2 >= 1 && s.find({x, y-2}) == s.end()) ans.insert({x, y-2});
    if (x+2 <= n && s.find({x+2, y}) == s.end()) ans.insert({x+2, y});
    if (y+2 <= n && s.find({x, y+2}) == s.end()) ans.insert({x, y+2});
  }
  cout << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}