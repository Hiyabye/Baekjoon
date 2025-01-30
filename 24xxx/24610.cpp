#include <iostream>
#include <vector>
using namespace std;

inline bool check(int m, const vector<int> &t) {
  for (int i=0; i<m; i++) {
    if (t[i]) return true;
  }
  return false;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> t(m);
  for (int i=0; i<m; i++) cin >> t[i];

  vector<int> ans(m, 0);
  while (n) {
    for (int i=0; i<m; i++) {
      if (t[i] == 0) continue;
      t[i]--; n--; ans[i]++;
      if (n == 0) break;
    }
    if (!check(m, t)) break;
  }

  for (int i=0; i<m; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}