#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

struct pair_hash {
  size_t operator()(const pair<int, int> &p) const {
    return hash<long long>()(((long long)p.first) ^ (((long long)p.second) << 32));
  }
};

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  int ans = 0;
  unordered_set<pair<int, int>, pair_hash> s(v.begin(), v.end());
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (v[i].first == v[j].first || v[i].second == v[j].second) continue;
    if (s.find({v[i].first, v[j].second}) == s.end()) continue;
    if (s.find({v[j].first, v[i].second}) == s.end()) continue;
    ans++;
  }
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}