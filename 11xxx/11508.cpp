#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> c(n);
  for (int i=0; i<n; i++) cin >> c[i];
  sort(c.begin(), c.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (i % 3 != 2) ans += c[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}