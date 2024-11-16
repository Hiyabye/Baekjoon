#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;

struct pair_hash {
  size_t operator()(const pair<int, int> &p) const {
    return hash<int>()((p.first << 16) ^ p.second);
  }
};

unordered_map<int, pair<int, int>> mp1;
unordered_map<pair<int, int>, int, pair_hash> mp2;

void precompute(void) {
  int x = 1, y = 1, z = 2;
  for (int i=1; i<42000; i++) {
    mp1[i] = {x, y};
    mp2[{x, y}] = i;
    x++; y--;
    if (y == 0) x = 1, y = z++;
  }
}

void solve(void) {
  int a, b; cin >> a >> b;

  cout << mp2[{mp1[a].first + mp1[b].first, mp1[a].second + mp1[b].second}] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();

  int t; cin >> t;
  while (t--) solve();
  return 0;
}