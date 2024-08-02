#include <iostream>
#include <unordered_set>
#include <utility>
using namespace std;

struct pair_hash {
  size_t operator()(const pair<int, int> &pair) const {
    return hash<long long>()(((long long)pair.first) ^ (((long long)pair.second) << 32));
  }
};

void solve(void) {
  int n; cin >> n;
  int a, b; cin >> a >> b;

  unordered_set<pair<int, int>, pair_hash> s;
  while (n--) {
    int x, y; cin >> x >> y;
    s.insert({x, y});
  }

  int ans = 0;
  for (auto [x, y] : s) {
    if (s.find({x+a, y}) == s.end()) continue;
    if (s.find({x, y+b}) == s.end()) continue;
    if (s.find({x+a, y+b}) == s.end()) continue;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}