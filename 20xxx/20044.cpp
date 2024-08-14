#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> w(2*n);
  for (int i=0; i<2*n; i++) cin >> w[i];
  sort(w.begin(), w.end());

  int ans = 1e9;
  for (int i=0; i<n; i++) {
    ans = min(ans, w[i] + w[2*n-i-1]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}