#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> z(n);
  for (int i=0; i<n; i++) cin >> z[i];
  sort(z.begin(), z.end());

  int ans = 1;
  for (int i=0; i<n; i++) {
    if (z[i] <= i) break;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}