#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  int mx = x[0], mn = x[0];
  for (int i=1; i<n; i++) {
    mx = max(mx, x[i]);
    mn = min(mn, x[i]);
  }

  if (x[0] == mn) cout << "ez";
  else if (x[0] == mx) cout << "hard";
  else cout << "?";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}