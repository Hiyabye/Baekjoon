#include <iostream>
#include <unordered_map>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  unordered_map<int, int> t;
  while (m--) {
    int x; cin >> x;
    t[x]++;
  }

  int ans = 0;
  for (auto [_, p] : t) {
    if (p > 1) ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}