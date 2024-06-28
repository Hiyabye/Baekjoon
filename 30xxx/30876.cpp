#include <iostream>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;
  pair<int, int> ans = {1e9, 1e9};
  for (int i=0; i<n; i++) {
    int x, y; cin >> x >> y;
    if (y < ans.second) ans = {x, y};
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}