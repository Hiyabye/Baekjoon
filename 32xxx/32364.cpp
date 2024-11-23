#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> h(n);
  for (int i=0; i<n; i++) cin >> h[i];

  int ans = 0;
  for (int i=0; i<n/2; i++) {
    if (h[i] == h[i+n/2]) ans += 2;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}