#include <iostream>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_map<int, int> x, y;
  while (n--) {
    int a, b; cin >> a >> b;
    x[a]++; y[b]++;
  }

  int ans = 0;
  for (auto [_, v] : x) if (v > 1) ans++;
  for (auto [_, v] : y) if (v > 1) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}