#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  sort(x.begin(), x.end());

  int ans = 0;
  for (int i=0; i<n-2; i++) for (int j=i+2; j<n; j++) {
    if ((x[i] + x[j]) & 1) continue;
    if (binary_search(x.begin()+i+1, x.begin()+j, (x[i] + x[j]) / 2)) ans++;
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}