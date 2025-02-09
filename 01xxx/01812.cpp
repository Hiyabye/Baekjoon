#include <iostream>
#include <vector>
using namespace std;

inline bool neg(int n, const vector<int> &v) {
  for (int i=0; i<n; i++) {
    if (v[i] < 0) return true;
  }
  return false;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> ans(n, 0);
  while (ans[0] <= v[0]) {
    for (int i=1; i<n; i++) ans[i] = v[i-1] - ans[i-1];
    if (!neg(n, ans) && v[n-1] == ans[n-1] + ans[0]) break;
    ans[0]++;
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}