#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == -1) return false;

  int ans = 0, prev = 0;
  for (int i=0; i<n; i++) {
    int s, t; cin >> s >> t;
    ans += s * (t - prev);
    prev = t;
  }
  cout << ans << " miles\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}