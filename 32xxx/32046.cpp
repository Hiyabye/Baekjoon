#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (ans + a[i] > 300) continue;
    ans += a[i];
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}