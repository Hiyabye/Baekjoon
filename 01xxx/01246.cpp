#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> p(m);
  for (int i=0; i<m; i++) cin >> p[i];
  sort(p.begin(), p.end());

  pair<int, int> ans = {0, 0};
  for (int i=0; i<m; i++) {
    int cnt = min(m-i, n);
    if (p[i] * cnt > ans.second) {
      ans = {p[i], p[i] * cnt};
    }
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}