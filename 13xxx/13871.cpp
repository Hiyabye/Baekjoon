#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, c, s; cin >> n >> c >> s;
  vector<int> x(c);
  for (int i=0; i<c; i++) cin >> x[i];

  int ans = (s == 1), cur = 1;
  for (int i=0; i<c; i++) {
    cur += x[i];
    if (cur > n) cur = 1;
    if (cur < 1) cur = n;
    if (cur == s) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}