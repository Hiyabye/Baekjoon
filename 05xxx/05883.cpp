#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc(int n, const vector<int> &b, int x) {
  int ret = 0, cur = b[0], cnt = 1;
  for (int i=1; i<n; i++) {
    if (b[i] == x) continue;
    if (b[i] == cur) cnt++;
    else cur = b[i], cnt = 1;
    ret = max(ret, cnt);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> b(n);
  for (int i=0; i<n; i++) cin >> b[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans = max(ans, calc(n, b, b[i]));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}