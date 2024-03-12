#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];

  int ans = 1;
  for (int i=1; i<n; i++) {
    if (h[i-1] <= h[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}