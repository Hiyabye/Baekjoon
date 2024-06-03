#include <iostream>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<=i; j++) cin >> a[i][j];

  int ans = a[0][0];
  for (int i=1; i<n-1; i++) ans += a[i][0] + a[i][i];
  if (n > 1) for (int i=0; i<n; i++) ans += a[n-1][i];
  cout << "Case #" << idx << ":" << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}