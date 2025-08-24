#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  int ans = 1, cur = x[0];
  for (int i=1; i<n; i++) {
    if (x[i] <= cur + k) continue;
    ans++; cur = x[i];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}