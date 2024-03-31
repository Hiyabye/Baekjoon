#include <iostream>
using namespace std;

int solve(int n) {
  int s, t, r; cin >> s >> t >> r;

  int ans = 0, cnt = 0;
  while (s * t < n - cnt) ans += t + r, cnt += s * t;
  return ans + (n - cnt + s - 1) / s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k; cin >> n >> k;
  while (k--) cout << solve(n) << "\n";
  return 0;
}