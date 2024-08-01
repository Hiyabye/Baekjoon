#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (a[i] + a[j] > m) continue;
    ans = max(ans, a[i] + a[j]);
  }
  cout << (ans ? to_string(ans) : "NONE") << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}