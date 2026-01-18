#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<bool> v(n+1, false);
  while (k--) {
    int d; cin >> d;
    v[d] = true;
  }

  int ans = 0;
  bool flag = false;
  for (int i=1; i<=n; i++) {
    flag = (i == 1 || v[i] || !flag);
    if (flag) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}